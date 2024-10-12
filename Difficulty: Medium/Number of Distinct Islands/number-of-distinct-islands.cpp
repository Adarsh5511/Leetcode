//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void bfs(int row0, int col0, vector<vector<int>>& grid, vector<vector<int>>& vis, int delrow[],
         int delcol[], set<vector<pair<int, int>>>& ans) {
    
    queue<pair<int, int>> q;
    q.push({row0, col0});
    vector<pair<int, int>> temp;
    temp.push_back({0, 0});  // Store the starting point as (0, 0) relative to itself
    
    vis[row0][col0] = 1;  // Mark the starting point as visited
    
    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            
            if (nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && vis[nrow][ncol] == -1 && grid[nrow][ncol] == 1) {
                q.push({nrow, ncol});
                vis[nrow][ncol] = 1;  // Mark as visited
                
                // Store the relative position with respect to the starting point (row0, col0)
                temp.push_back({nrow - row0, ncol - col0});
            }
        }
    }
    
    ans.insert(temp);  // Insert the island shape (relative positions) into the set
}

int countDistinctIslands(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<int>> vis(n, vector<int>(m, 0));
    
    // Mark all land cells (-1) that need to be visited
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) {
                vis[i][j] = -1;
            }
        }
    }
    
    int delrow[] = {-1, 0, 1, 0};  // Directions for row movement
    int delcol[] = {0, 1, 0, -1};  // Directions for column movement
    
    set<vector<pair<int, int>>> ans;  // To store distinct island shapes
    
    // Traverse the grid and start BFS from every unvisited land cell
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1 && vis[i][j] == -1) {
                vis[i][j] = 1;  // Mark as visited
                bfs(i, j, grid, vis, delrow, delcol, ans);  // Perform BFS to discover the island
            }
        }
    }
    
    return ans.size();  // The size of the set gives the number of distinct islands
}

};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends