class Solution {
  public:
    int orangesRot(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>visit(n,vector<int>(m,0));
        int fresscnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] == 2){
                    q.push({{i,j},0});
                    visit[i][j]=2;
                }
                if(mat[i][j] == 1){
                    fresscnt++;
                }
            }
        }
        int mxtime = 0;
        int cnt= 0;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int tim = q.front().second;
            q.pop();
            mxtime = max(mxtime,tim);
            
            for(int i=0;i<4;i++){
                int nrow = row+delrow[i];
                int ncol = col+delcol[i];
                
                if(nrow >=0 && nrow <n && ncol >=0 && ncol <m && visit[nrow][ncol] != 2 &&
                    mat[nrow][ncol] == 1
                ){
                    visit[nrow][ncol] = 2;
                    q.push({{nrow,ncol},tim+1});
                    cnt++;
                    
                }
            }
        }
        if(cnt != fresscnt){
            return -1;
        }
        return mxtime;
    }
};