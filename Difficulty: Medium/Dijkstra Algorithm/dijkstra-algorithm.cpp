class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        vector<pair<int,int>>adj[V];
        
        for(auto &it : edges){
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        
            priority_queue<pair<int,int>,
               vector<pair<int,int>>,
               greater<pair<int,int>>> pq;
               pq.push({0,src});
        vector<int>dist(V,INT_MAX);
        
        dist[src] = 0;
        
        while(!pq.empty()){
            int node = pq.top().second;
            int dis = pq.top().first;
            pq.pop();
            if(dis > dist[node]) continue;
            for(auto it : adj[node]){
                int adjnode = it.first;
                int wt = it.second;
                
                if(dist[node] + wt < dist[adjnode]){
                    dist[adjnode] = dist[node] + wt;
                    pq.push({dist[adjnode],adjnode});
                }
            }
        }
        return dist;
        
    }
};