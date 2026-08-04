class DSU {
    public:
    vector<int>parent,rank;
    DSU(int n){
        parent.resize(n+1);
        rank.resize(n+1,0);
        for(int i=0;i<=n;i++){
            parent[i] = i;
        }
    }
    int find_p(int n){
        if(parent[n] == n){
            return n;
        }
        return parent[n] = find_p(parent[n]);
    }
    
    void Union(int u, int v){
        int pu = find_p(u);
        int pv = find_p(v);
        
        if(pu == pv) return ;
        if(rank[pu] > rank[pv]){
            parent[pv] = pu;
        }
        else if(rank[pv] > rank[pu]){
            parent[pu] = pv;
        }
        else{
            parent[pu] = pv;
            rank[pv]++;
        }
    }
};
class Solution {
  public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
        DSU ds(n*m);
        vector<vector<int>>visit(n,vector<int>(m,0));
        int cnt = 0;
        int delrow[] = {-1,0,1,0};
        int delcol[] ={0,1,0,-1};
        vector<int>ans;
        
        for(auto &it : operators){
            int row = it[0];
            int col = it[1];
            
            int node = row*m+col;
            
            if(visit[row][col]){
                ans.push_back(cnt);
                continue;
            }
            
            visit[row][col] = 1;
            cnt++;
            
            for(int i=0;i<4;i++){
                int nrow = row+delrow[i];
                int ncol = col+delcol[i];
                
                int adjnode  = nrow*m+ncol;
                
                if(nrow >=0 && ncol >= 0 && nrow < n && ncol < m && visit[nrow][ncol]){
                    if(ds.find_p(node) != ds.find_p(adjnode)){
                        ds.Union(node,adjnode);
                        cnt--;
                    }
                }
            }
            ans.push_back(cnt);
            
        }
        return ans;
        
        
        
    }
};
