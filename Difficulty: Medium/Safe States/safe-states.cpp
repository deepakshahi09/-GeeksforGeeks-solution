class Solution {
  public:
    vector<int> safeNodes(int V, vector<vector<int>>& edges) {
        // Step 1: Create graph and reverse graph
        vector<vector<int>> adj(V), rev(V);
        vector<int> outdegree(V, 0);
        
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            rev[e[1]].push_back(e[0]);
        }
        
        // Step 2: Count outdegree for each node
        for (int i = 0; i < V; i++) {
            outdegree[i] = adj[i].size();
        }
        
        // Step 3: Push all terminal nodes (outdegree = 0)
        queue<int> q;
        for (int i = 0; i < V; i++) {
            if (outdegree[i] == 0) q.push(i);
        }
        
        // Step 4: BFS
        vector<int> safe;
        while (!q.empty()) {
            int node = q.front(); q.pop();
            safe.push_back(node);
            
            for (int prev : rev[node]) {
                outdegree[prev]--;
                if (outdegree[prev] == 0)
                    q.push(prev);
            }
        }
        
        // Step 5: Sort safe nodes
        sort(safe.begin(), safe.end());
        return safe;
    }
};
