class Solution {
  public:
    int countDistinctIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        set<vector<pair<int,int>>>st;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j] && grid[i][j] == 'L'){
                    visit[i][j] = 1;
                    
                    int brow = i;
                    int bcol = j;
                    
                    queue<pair<int,int>>q;
                    vector<pair<int,int>>islnd;
                    
                    q.push({i,j});
                    visit[i][j] = 1;
                    while(!q.empty()){
                        int row=q.front().first;
                        int col = q.front().second;
                        q.pop();
                        
                        
                        islnd.push_back({row-brow,col-bcol});
                        
                        for(int i=0;i<4;i++){
                            int nrow = delrow[i]+row;
                            int ncol = delcol[i]+col;
                            
                            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !visit[nrow][ncol] && grid[nrow][ncol] == 'L'){
                                q.push({nrow,ncol});
                                visit[nrow][ncol] = 1;
                                
                            }
                        }
                    }
                    st.insert(islnd);
                    
                }
                
            }
            
        }
        
        return st.size();
        
    }
};
