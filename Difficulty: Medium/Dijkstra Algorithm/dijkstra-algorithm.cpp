class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        vector<pair<int,int>>adj[V];
        for(auto it : edges){
            int u = it[0];
            int v = it[1];
            int w = it[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        vector<int>dist(V,1e9);
         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        dist[src] = 0;
        pq.push({0,src});
        
        while(!pq.empty()){
            int node = pq.top().second;
            int dis = pq.top().first;
            pq.pop();
            if(dis > dist[node]) continue;
            for(auto it : adj[node]){
                int adjnode = it.first;
                int wt = it.second;
                
                if(dist[node] + wt < dist[adjnode]){
                    dist[adjnode] = dist[node]+wt;
                    pq.push({dist[adjnode],adjnode});
                }
            }
        }
        return dist;
    }
};