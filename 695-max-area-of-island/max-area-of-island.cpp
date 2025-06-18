class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
    int n=grid.size();
        int m=grid[0].size();
        int maxsofar=0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cnt=0;
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    cnt++;
                    int maxi=0;
                    dfs(i,j,grid,vis,maxi);
                    maxsofar=max(maxsofar,maxi);
                    maxi=0;
                }
            }
        }
        return maxsofar;
    }

    void dfs(int r,int c,vector<vector<int>>& grid,vector<vector<int>> &vis,int &maxi){
        vis[r][c]=1;
        maxi++;

        if (r > 0 && !vis[r - 1][c] && grid[r - 1][c] == 1) 
            dfs(r - 1, c, grid, vis,maxi);

       
        if (r + 1 < grid.size() && !vis[r + 1][c] && grid[r + 1][c] == 1) 
            dfs(r + 1, c, grid, vis,maxi);

       
        if (c > 0 && !vis[r][c - 1] && grid[r][c - 1] == 1) 
            dfs(r, c - 1, grid, vis,maxi);

       
        if (c + 1 < grid[0].size() && !vis[r][c + 1] && grid[r][c + 1] == 1) 
            dfs(r, c + 1, grid, vis,maxi);


    }    
};