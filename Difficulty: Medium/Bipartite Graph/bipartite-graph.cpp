class Solution {
public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
        
        vector<int> adj[V];
        
        for(int i = 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> color(V, -1);
        queue<int> q;
        
        for(int i = 0; i < V; i++){
            
            if(color[i] == -1){
                
                q.push(i);
                color[i] = 0;
                
                while(!q.empty()){
                    
                    int node = q.front();
                    q.pop();
                    
                    for(int j = 0; j < adj[node].size(); j++){
                        
                        int neighbour = adj[node][j];
                        
                        if(color[neighbour] == -1){
                            color[neighbour] = 1 - color[node];
                            q.push(neighbour);
                        }
                        else if(color[neighbour] == color[node]){
                            return false;
                        }
                    }
                }
            }
        }
        
        return true;
    }
};