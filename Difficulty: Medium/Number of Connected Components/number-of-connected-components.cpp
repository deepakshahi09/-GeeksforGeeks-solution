class Solution {
  public:
    void dfs(int node, vector<bool>&visit,vector<vector<int>>&adj){
        visit[node] = true;
        for(int i : adj[node]){
            if(!visit[i]){
                dfs(i,visit,adj);
            }
        }
    }
    int countConnected(int v, vector<vector<int>>& edges) {
        
        vector<vector<int>>adj(v);
        for(auto it : edges){
            int u = it[0];
            int v = it[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool>visit(v,false);
        int count = 0;
        
        for(int i=0;i<v;i++){
            if(!visit[i]){
                count++;
                dfs(i,visit,adj);
            }
        }
        return count;
        
        
        
        
    }
};