class Solution {
  public:
    int kruskalsMST(int V, vector<vector<int>> &edges) {
        vector<vector<pair<int,int>>>adj(V);
        for(auto &it:edges){
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        vector<int>visit(V,0);
        int cost = 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        while(!pq.empty()){
            int node = pq.top().second;
            int dist = pq.top().first;
            pq.pop();
            if(visit[node]){
                continue;
            }
            visit[node] = 1;
            cost+=dist;
            for(auto &it: adj[node]){
                int adjnode = it.first;
                int adjwt = it.second;
                if(!visit[adjnode]){
                    pq.push({adjwt,adjnode});
                }
            }
        }
        return cost;
    }
};