class Solution {
  public:
    int shortestPath(vector<vector<int>> &mat, vector<int> &src, vector<int> &dest) {
        int n = mat.size();
        int m = mat[0].size();
        queue<pair<int,pair<int,int>>>q;
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        q.push({0,{src[0],src[1]}});
        dist[src[0]][src[1]] = 0;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        if(mat[dest[0]][dest[1]] == 0){
            return -1;
        }
        while(!q.empty()){
            int dis = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            q.pop();
            if(row == dest[0] && col == dest[1]){
                return dis;
            }
            
            for(int i=0;i<4;i++){
                int nrow = delrow[i] + row;
                int ncol = delcol[i] + col;
                
                if(nrow >= 0 && ncol >= 0 && nrow<n && ncol <m && mat[nrow][ncol]==1){
                    if(dist[nrow][ncol] > dis + 1){
                        dist[nrow][ncol] = dis+1;
                        q.push({dis+1,{nrow,ncol}});
                    }
                }
            }
        }
        
    }
};
