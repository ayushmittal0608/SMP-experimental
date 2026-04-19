## The Scenario: "The Resilience of the Fintech Backbone"
Imagine you are architecting a distributed payment network. Each node is a server, and each edge is a high-speed fiber link. However, your budget is tight. You need to ensure that the network is Bi-connected—meaning there is no single point of failure. If any one server crashes, the rest of the servers must still be able to communicate with each other.

## The Challenge: "Critical Bridge Identification"
You are given an undirected graph with $V$ vertices and $E$ edges.
1. The Task: Find all Bridges in the graph. A bridge is an edge that, if removed, increases the number of connected components in the graph (i.e., it breaks the network).
2. The Constraint: You must solve this in $O(V + E)$ time. A simple $O(E \times (V+E))$ approach (removing each edge and re-running BFS/DFS) is too slow for a real-time system.
3. The "Hard" Part: Once you find the bridges, determine the Minimum number of edges you need to add to the graph to make it 2-edge-connected (so that no bridges remain).

## The Math & Logic
To solve this efficiently, you need to maintain two arrays during a single DFS traversal:
1. $discovery[u]$: The time at which node $u$ was first visited.
2. $low[u]$: The lowest discovery time reachable from $u$ (including itself) using back-edges in the DFS tree.

**The Condition:** An edge $(u, v)$ is a bridge if and only if:
$$low[v] > discovery[u]$$
(This means there is no back-edge from $v$ or its descendants to $u$ or its ancestors.)
