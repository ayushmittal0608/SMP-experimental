Firstly, we need to construct a graph, the question is asking for undirected graph of vertex V and edge E.
let's say V=4 and E=3

vector<int>adj[V];
0 - 1 - 2 - 3
this above graph is showing connected components but are not biconnected, to biconnect them, we need to connect 2 to 0, let's say

Now, we need to take E=4 because one more edge is being added.
0 - 1 - 2 - 3
' - - - '

- Now, we need to find all the bridges between components and condition for bridge is low[v]>discovery[u], so we need two parameters discovery and low.

So, {low[v]>discovery[u] && bridges.push_back({u, v})} || {low[v]>discovery[u] ? (bridges.push_back({u, v}) : null)} -> [React.js Snippet] 

- discovery[u]: time at which node u was first visited.
- low[u]: lowest discovery time reachable from u using back edges, which means that like in the above case, 2 is connected to 0, so the lowest discovery time would become discovery[0] time as the process started from there, so it would have minimum time, so now for 2, it becomes lowest discovery time.

$$ low[u] = min(low[u], discovery[v]); (back edge) $$

$$ low[u] = min(low[u], low[v]); (tree edge) $$

So, now we have to calculate bridge edges and now we know how to do it, but we need to discuss edge cases first, like:
1. if(v==parent){ continue; }
2. if(!visited[i]){ then call dfs() }

DFS parameters => (i, -1, adj, low, disc, visited) => (v, u, adj, low, disc, visited)

Now, we can solve the problem
