class Solution {
  public:
    int shortestPath(vector<vector<int>> &mat, vector<int> &src, vector<int> &dest) {
        queue<pair<int,pair<int,int>>>q;
        int n = mat.size();
        int m = mat[0].size();
        if(mat[src[0]][src[1]] == 0 || mat[dest[0]][dest[1]] == 0){
            return -1;
        }
        if(src[0] == dest[0] && src[1] == dest[1]){
            return 0;
        }
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        dist[src[0]][src[1]] = 0;
        q.push({0,{src[0],src[1]}});
        
        int delrow[] = {0,1,0,-1};
        int delcol[] = {-1,0,1,0};
        
        while(!q.empty()){
            int step = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            q.pop();
            
            for(int i=0;i<4;i++){
                int nrow = delrow[i]+row;
                int ncol = delcol[i]+col;
                
                if(nrow < n && nrow >=0 && ncol < m && ncol >=0 &&
                    mat[nrow][ncol]==1 && step+1 < dist[nrow][ncol]
                ){
                    dist[nrow][ncol] = step+1;
                    q.push({step+1,{nrow,ncol}});
                    if(nrow == dest[0] && ncol == dest[1]){
                        return step+1;
                    }
                }
            }
        }
        return -1;
        
    }
};
