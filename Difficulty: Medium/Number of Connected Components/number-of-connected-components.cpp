class Solution {
    private:
        void dfs(int node, vector<int>&visit,vector<int>adj[]){
            visit[node] = 1;
            for(int i : adj[node]){
                if(!visit[i]){
                    dfs(i,visit,adj);
                }
            }
        }
  public:
    int countConnected(int V, vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int>adj[V];
        for(int i=0;i<n;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>visit(V,0);
        int count = 0;
        for(int i=0;i<V;i++){
            if(!visit[i]){
                count++;
                dfs(i,visit,adj);
            }
        }
        return count;
        
        
    }
};