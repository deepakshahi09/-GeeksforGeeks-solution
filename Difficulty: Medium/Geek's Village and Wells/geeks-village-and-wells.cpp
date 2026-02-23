// User function Template for C++

class Solution {
  public:
    vector<vector<int>> chefAndWells(int n, int m, vector<vector<char>> &c) {
        vector<vector<int>>dis(n,vector<int>(m,-1));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(c[i][j] == 'W'){
                    q.push({i,j});
                    dis[i][j]=0;
                }
                else if(c[i][j] == 'N'){
                    dis[i][j] = 0;
                }
            }
        }
        int dir[4][2] = {{1,0},{-1,0},{0,-1},{0,1}};
        
        while(!q.empty()){
            int size = q.size();
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            
            for(int k=0;k<4;k++){
                int nx = x+dir[k][0];
                int ny = y+dir[k][1];
                
                if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                    if(c[nx][ny] != 'N' && dis[nx][ny] == -1){
                        dis[nx][ny] = dis[x][y]+1;
                        q.push({nx,ny});
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(c[i][j] == 'H'){
                    if(dis[i][j] != -1){
                        dis[i][j] = 2*dis[i][j];
                    }
                    
                }
                else{
                    dis[i][j] = 0;
                }
            }
        }
        return dis;
        
    }
};