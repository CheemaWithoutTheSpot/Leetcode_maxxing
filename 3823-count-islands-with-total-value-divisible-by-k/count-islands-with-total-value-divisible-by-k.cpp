class Solution {
public:
    long long dfs(vector<vector<int>>& grid, int r, int c)
    {
        if(r<0 || c <0 || r>=grid.size() ||c>=grid[0].size() || grid[r][c] == 0)
            return 0;
            
        int temp = grid[r][c];
        grid[r][c] = 0;
        return  temp + dfs(grid, r+1, c) + dfs(grid, r-1, c) + dfs(grid, r, c+1) + dfs(grid, r, c-1);
        
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        if (grid.empty()) return 0;

        int rows = grid.size();
        int cols = grid[0].size();
        int res = 0;

        for (int r=0; r<rows; r++) {
            for (int c=0; c<cols; c++) {
                if (grid[r][c] != 0) {
                    
                    long long ans = dfs(grid, r, c);
                    if (ans>0 && ans%k == 0)    res++;      
                }      
            }
        }

        return res;
    }
};