class Solution {
  public:
    int countPaths(int V, vector<vector<int>>& edges) {
        vector<pair<int,int>>adj[V];
        for(auto it : edges){
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        vector<int>dist(V,1e9);
        vector<int>way(V,0);
        priority_queue<pair<int,int>,
               vector<pair<int,int>>,
               greater<pair<int,int>>> pq;
               
        pq.push({0,0});
        dist[0] = 0;
        way[0] = 1;
        
        int mod = (int)(1e9+7);
        while(!pq.empty()){
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            for(auto it : adj[node]){
                int adjNode = it.first;
                int adjWt = it.second;
                
                if(dis + adjWt < dist[adjNode]){
                    dist[adjNode] = dis + adjWt;
                    pq.push({dist[adjNode],adjNode});
                    way[adjNode] = way[node];
                }
                else if(dis + adjWt == dist[adjNode]){
                    way[adjNode] = (way[adjNode] + way[node])%mod;
                }
            }
        }
        return way[V-1];
    }
};