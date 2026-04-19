#include <bits/stdc++.h>
using namespace std;

class NetworkResilience{
    int timer=1;
    vector<pair<int, int>>bridges;
    void dfs(int u, int p, vector<int> adj[], vector<int>& disc, vector<int>& low, vector<bool>& vis){
        vis[u]=true;
        disc[u]=low[u]=timer++;
        for(int v:adj[u]){
            if(v==p){
                continue;
            }
            if(vis[v]){
                low[u]=min(low[u], disc[v]);
            }
            else {
                dfs(v, u, adj, disc, low, vis);
                low[u]=min(low[u], low[v]);
                if(low[v]>disc[u]){
                    bridges.push_back({u, v});
                }
            }
        }
    }
    public: 
        void findBridges(int n, vector<int> adj[]) {
            vector<int>disc(n, 0);
            vector<int>low(n, 0);
            vector<bool>vis(n, false);
            for(int i=0; i<n; i++){
                if(!vis[i]){
                    dfs(i, -1, adj, disc, low, vis);
                }
            }
            for(auto it:bridges){
                cout<<it.first<<" "<<it.second<<endl;
            }
            if(bridges.empty()){
                cout<<"No bridge found"<<endl;
            }
        }
};

int main() {
    int V=4;
    vector<int>adj[V];
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(0);
    adj[0].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(2);
    NetworkResilience nr;
    nr.findBridges(V, adj);
    return 0;
}