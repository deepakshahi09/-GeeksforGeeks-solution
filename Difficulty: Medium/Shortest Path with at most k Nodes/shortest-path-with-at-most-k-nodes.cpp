class Solution {
  public:
    int findCheapestCost(int n, vector<vector<int>>& edges, int src, int dst, int k) {
        // code here
        vector<pair<int,int>>adj[n];
        for(auto i : edges){
            adj[i[0]].push_back({i[1],i[2]});
        }
        vector<int>dist(n,1e9);
        dist[src] = 0;
        
        //step,node,dist
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});
        
        while(!q.empty()){
            int stop = q.front().first;
            int node = q.front().second.first;
            int cost = q.front().second.second;
            q.pop();
            if(stop > k) continue;
            
            for(auto it : adj[node]){
                int adjnode = it.first;
                int adjW = it.second;
                
                if(cost + adjW < dist[adjnode]){
                    dist[adjnode] = cost + adjW;
                    q.push({stop+1,{adjnode,cost + adjW}});
                }
            }
            
        }
        
        if(dist[dst] == 1e9) return -1;
        return dist[dst];
    }
};