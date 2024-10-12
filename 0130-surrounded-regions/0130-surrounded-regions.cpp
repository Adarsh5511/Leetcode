class Solution {
public:
    void dfs(int row, int col, vector<vector<char>>& board, int delrow[], int delcol[], set<pair<int, int>>& store) {
        store.insert({row, col});
        
        for (int i = 0; i < 4; i++) {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            
            // Ensure the new row and column indices are within bounds
            if (nrow >= 0 && nrow < board.size() && ncol >= 0 && ncol < board[0].size()) {
                // Check if the neighboring cell is 'O' and not already visited
                if (board[nrow][ncol] == 'O' && store.find({nrow, ncol}) == store.end()) {
                    dfs(nrow, ncol, board, delrow, delcol, store);
                }
            }
        }
    }
    
    void solve(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty()) return; // Check for empty board
        
        set<pair<int, int>> store;
        
        int n = board.size(); // Number of rows
        int m = board[0].size(); // Number of columns
        
        int delrow[] = {-1, 0, 1, 0}; // Directions for row movement
        int delcol[] = {0, 1, 0, -1}; // Directions for column movement
        
        // Traverse the boundary cells
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // Check if the cell is on the boundary and is 'O'
                if ((i == 0 || i == n - 1 || j == 0 || j == m - 1) && board[i][j] == 'O') {
                    dfs(i, j, board, delrow, delcol, store);
                }
            }
        }
        
        // Now modify the board
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // Flip 'O' to 'X' if it's not in the store
                if (board[i][j] == 'O' && store.find({i, j}) == store.end()) {
                    board[i][j] = 'X';
                }
            }
        }
    }
};
