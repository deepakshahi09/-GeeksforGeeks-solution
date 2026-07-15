class Solution {
public:
    int shortestPath(vector<vector<int>> &mat, vector<int> &src, vector<int> &dest) {
        
        int n = mat.size();
        int m = mat[0].size();
        
        // If source or destination is blocked
        if(mat[src[0]][src[1]] == 0 || mat[dest[0]][dest[1]] == 0)
            return -1;
        
        // If source and destination are the same
        if(src[0] == dest[0] && src[1] == dest[1])
            return 0;
        
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        queue<pair<int, pair<int, int>>> q;
        
        dist[src[0]][src[1]] = 0;
        q.push({0, {src[0], src[1]}});
        
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        
        while(!q.empty()) {
            
            int dis = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            q.pop();
            
            for(int i = 0; i < 4; i++) {
                
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow >= 0 && nrow < n &&
                   ncol >= 0 && ncol < m &&
                   mat[nrow][ncol] == 1 &&
                   dis + 1 < dist[nrow][ncol]) {
                    
                    dist[nrow][ncol] = dis + 1;
                    
                    if(nrow == dest[0] && ncol == dest[1])
                        return dis + 1;
                    
                    q.push({dis + 1, {nrow, ncol}});
                }
            }
        }
        
        return -1;
    }
};