class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt=0;
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    cnt++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return cnt;
    }

    void dfs(int r,int c,vector<vector<char>>& grid,vector<vector<int>> &vis){
        vis[r][c]=1;

        if (r > 0 && !vis[r - 1][c] && grid[r - 1][c] == '1') 
            dfs(r - 1, c, grid, vis);

       
        if (r + 1 < grid.size() && !vis[r + 1][c] && grid[r + 1][c] == '1') 
            dfs(r + 1, c, grid, vis);

       
        if (c > 0 && !vis[r][c - 1] && grid[r][c - 1] == '1') 
            dfs(r, c - 1, grid, vis);

       
        if (c + 1 < grid[0].size() && !vis[r][c + 1] && grid[r][c + 1] == '1') 
            dfs(r, c + 1, grid, vis);


    }
};