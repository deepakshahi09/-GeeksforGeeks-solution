class Solution {
  public:
    int minCostPath(vector<vector<int>>& mat) {
        priority_queue<
            pair<int, pair<int,int>>,
            vector<pair<int, pair<int,int>>>,
            greater<pair<int, pair<int,int>>>> pq;
        
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        
        dist[0][0]= 0;
        pq.push({0,{0,0}});
        int delrow[] = {0,1,0,-1};
        int delcol[] = {-1,0,1,0};
        while(!pq.empty()){
            int dis = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            pq.pop();
            
            if(row == n-1 && col == m-1) return dis;
            
            for(int i=0;i<4;i++){
                int nrow = row+delrow[i];
                int ncol = col+delcol[i];
                
                if(nrow >= 0 && nrow < n && ncol >=0 && ncol < m){
                    int neweffort = max(abs(mat[row][col] - mat[nrow][ncol]),dis);
                    if(neweffort < dist[nrow][ncol]){
                        dist[nrow][ncol] = neweffort;
                        pq.push({neweffort,{nrow,ncol}});
                    }
                }
            }
        }
        return 0;
 
    }
};
