class Solution {
    
    private:
    void dfs(int row, int col, vector<vector<int>>&visit,vector<vector<int>>&grid,int &c){
        int n = grid.size();
        int m = grid[0].size();
        visit[row][col] = 1;
        c++;
        int delrow[] = {-1,-1,-1,0,0,1,1,1};
        int delcol[] = {-1,0,1,-1,1,-1,0,1};
        
        for(int i=0;i<8;i++){
            int nrow = row+delrow[i];
            int ncol = col+delcol[i];
            
            
            if(nrow >=0 && ncol >=0 && nrow <n && ncol < m && !visit[nrow][ncol] && grid[nrow][ncol] == 1){
                
                dfs(nrow,ncol,visit,grid,c);
            }
        }
    }
  public:
    
    int largestRegion(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        vector<vector<int>>visit(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int c = 0;
                if(!visit[i][j] && grid[i][j] == 1){
                    
                    dfs(i,j,visit,grid,c);
                    ans = max(ans,c);
                }
            }
        }
        return ans;
    }
};