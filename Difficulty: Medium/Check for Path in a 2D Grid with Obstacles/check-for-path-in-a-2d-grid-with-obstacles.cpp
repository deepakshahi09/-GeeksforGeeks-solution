class Solution {
  public:
    bool isPathPossible(vector<vector<int>>& mat) {
        int n= mat.size();
        int m =mat[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        
        queue<pair<int,int>>q;
        bool st = false;
        bool lst = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] == 1){
                    q.push({i,j});
                    st = true;
                }
                if(mat[i][j] == 2){
                    lst = true;
                }
            }
        }
        if(!st && !lst) return false;
        int delrow[]= {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            visit[row][col] = 1;
            for(int i=0;i<4;i++){
                int nrow = row+delrow[i];
                int ncol = col+delcol[i];
                
                if(nrow >=0 && nrow <n && ncol >= 0 && ncol <m){
                    if(mat[nrow][ncol] == 2) return true;
                    if(!visit[nrow][ncol] && mat[nrow][ncol] == 3){
                        q.push({nrow,ncol});
                        visit[nrow][ncol] = 1;
                    }
                }
                
            }
        }
        return false;
    }
};