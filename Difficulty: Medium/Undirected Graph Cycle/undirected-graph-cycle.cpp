//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
 
    // Function to detect cycle in an undirected graph.
    

public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
       vector<bool> visited(V, false);
    vector<int> parent(V, -1);
    
    // For each unvisited vertex, apply BFS
    for (int start = 0; start < V; start++) {
        if (!visited[start]) {
            queue<int> q;
            q.push(start);
            visited[start] = true;

            while (!q.empty()) {
                int ele = q.front();
                q.pop();

                // Traverse all adjacent nodes
                for (auto neighbor : adj[ele]) {
                    if (!visited[neighbor]) {
                        // If neighbor is not visited, mark it visited and set parent
                        q.push(neighbor);
                        visited[neighbor] = true;
                        parent[neighbor] = ele;
                    } else if (parent[ele] != neighbor) {
                        // If neighbor is visited and not parent of current node, it's a cycle
                        return true;
                    }
                }
            }
        }
    }
    
    return false; // No cycle found

    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends