class Solution {
    private:
    void dfs(int row, int col, vector<vector<int>>&visit,vector<vector<char>>&grid,
    int delrow[], int delcol[]){
        visit[row][col] = 1;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<4;i++){
            int ncol = col+delcol[i];
            int nrow = row+delrow[i];
            
            if(nrow >= 0 && ncol >= 0 && nrow < n && ncol <m && 
            !visit[nrow][ncol] && grid[nrow][ncol] == 'O'){
                dfs(nrow,ncol,visit,grid,delrow,delcol);
            }
        }
    }
  public:
    void fill(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        vector<vector<int>>visit(n,vector<int>(m,0));
        for(int j=0;j<m;j++){
            //first row
            if(!visit[0][j] && grid[0][j] == 'O'){
                dfs(0,j,visit,grid,delrow,delcol);
            }
            //lst row
            if(!visit[n-1][j] && grid[n-1][j] == 'O'){
                dfs(n-1,j,visit,grid,delrow,delcol);
            }
        }
        
        for(int i=0;i<n;i++){
            if(!visit[i][0] && grid[i][0]=='O'){
                dfs(i,0,visit,grid,delrow,delcol);
            }
            if(!visit[i][m-1] && grid[i][m-1] == 'O'){
                dfs(i,m-1,visit,grid,delrow,delcol);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 'O' && !visit[i][j]){
                    grid[i][j] = 'X';
                }
            }
        }
        
    }
};