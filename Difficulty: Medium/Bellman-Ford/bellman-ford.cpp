class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        
        vector<int>dist(V,1e8);
        dist[src] = 0;
        for(int i=0;i<V-1;i++){
            bool flag = true;
            for(auto &j : edges){
                int u = j[0];
                int v = j[1];
                int wt = j[2];
                
                if(dist[u] == 1e8) continue;
                
                if(dist[u] + wt < dist[v]){
                    dist[v] = dist[u]+wt;
                    flag = false;
                }
            }
            if(flag){
                return dist;
            }
        }
        
        bool flag = true;
            for(auto &j : edges){
                int u = j[0];
                int v = j[1];
                int wt = j[2];
                
                if(dist[u] == 1e8) continue;
                
                if(dist[u] + wt < dist[v]){
                    dist[v] = dist[u]+wt;
                    flag = false;
                }
            }
            if(flag){
                return dist;
            }
            return {-1};
        
        
    }
};
