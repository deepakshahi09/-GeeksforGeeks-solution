class Solution {
  public:
    int cntOnes(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            if(!visit[0][i] && grid[0][i] == 1){
                q.push({0,i});
                visit[0][i] = 1;
            }
            if(!visit[n-1][i] && grid[n-1][i] == 1){
                q.push({n-1,i});
                visit[n-1][i] = 1;
            }
        }
        for(int i=0;i<n;i++){
            if(!visit[i][0] && grid[i][0] == 1) {
                q.push({i,0});
                visit[i][0] = 1;
            }
            if(!visit[i][m-1] && grid[i][m-1] == 1) {
                q.push({i,m-1});
                visit[i][m-1] = 1;
            }
        }
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++){
                int nrow = row+delrow[i];
                int ncol = col+delcol[i];
                
                if(nrow >=0 && nrow < n && ncol >= 0 && ncol < m && !visit[nrow][ncol] && grid[nrow][ncol] == 1){
                    q.push({nrow,ncol});
                    visit[nrow][ncol] = 1;
                }
            }
            
        }
        
        int c = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j] && grid[i][j] == 1){
                    c++;
                }
            }
        }
        return c;
        
        
        
        
    }
};