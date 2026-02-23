class Solution {
  public:
  
    bool dfs(int node, vector<int> adj[], vector<int> &visited, vector<int> &path) {
        
        visited[node] = 1;   // mark node visited
        path[node] = 1;      // mark node in current DFS path
        
        for(int j = 0; j < adj[node].size(); j++) {
            
            int neighbour = adj[node][j];
            
            // If neighbour is already in current path → cycle found
            if(path[neighbour] == 1) {
                return true;
            }
            
            // If neighbour not visited → call DFS
            if(visited[neighbour] == 0) {
                if(dfs(neighbour, adj, visited, path)) {
                    return true;
                }
            }
        }
        
        // Remove node from current path before returning
        path[node] = 0;
        
        return false;
    }
  
  
    bool isCyclic(int V, vector<vector<int>> &edges) {
        
        // Create adjacency list
        vector<int> adj[V];
        
        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
        }
        
        vector<int> visited(V, 0);
        vector<int> path(V, 0);
        
        // Check for all components
        for(int i = 0; i < V; i++) {
            if(visited[i] == 0) {
                if(dfs(i, adj, visited, path)) {
                    return true;
                }
            }
        }
        
        return false;
    }
};