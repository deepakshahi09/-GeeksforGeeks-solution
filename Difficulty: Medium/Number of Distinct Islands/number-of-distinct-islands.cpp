class Solution {
    private:
    void dfs(int row, int col,int baseRow,int baseCol,
                vector<vector<int>>&visit,
                vector<vector<char>>&grid,
                int delrow[],int delcol[],
                vector<pair<int,int>>&shape){
                    
        visit[row][col] = 1;
        shape.push_back({row - baseRow,col - baseCol});
        
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<4;i++){
            int nrow = row+delrow[i];
            int ncol = col+delcol[i];
            
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol <m && !visit[nrow][ncol] && 
            grid[nrow][ncol] == 'L'){
                
                dfs(nrow,ncol,baseRow,baseCol,visit,grid,delrow,delcol,shape);
            }
        }
        
    }
  public:
    int countDistinctIslands(vector<vector<char>>& grid) {
        // code here
        set<vector<pair<int,int>>>st;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j] && grid[i][j]=='L'){
                    vector<pair<int,int>>shape;
                    dfs(i,j,i,j,visit,grid,delrow,delcol,shape);
                    st.insert(shape);
                }
            }
        }
        return st.size();
    }
};
