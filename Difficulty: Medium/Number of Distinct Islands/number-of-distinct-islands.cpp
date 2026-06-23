class Solution {
    private:
    void dfs(int row,int col,int brow,int bcol,vector<vector<int>>&visit,vector<vector<char>>&grid,
                vector<pair<int ,int>>&shape,int delrow[],int delcol[]
    ){
        int n = grid.size();
        int m = grid[0].size();
        visit[row][col] = 1;
        shape.push_back({row-brow,col-bcol});
        for(int i=0;i<4;i++){
            int nrow = delrow[i] + row;
            int ncol = delcol[i] + col;
            
            if(nrow>=0 && ncol >= 0 && nrow<n && ncol < m && !visit[nrow][ncol] && grid[nrow][ncol]== 'L'){
                dfs(nrow,ncol,brow,bcol,visit,grid,shape,delrow,delcol);
            }
            
        }
    }
  public:
    int countDistinctIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        vector<vector<int>>visit(n,vector<int>(m,0));
        set<vector<pair<int,int>>>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j] && grid[i][j] == 'L') {
                    vector<pair<int,int>>shape;
                    dfs(i,j,i,j,visit,grid,shape,delrow,delcol);
                    st.insert(shape);
                    
                }
            }
        }
        return st.size();
    }
};
