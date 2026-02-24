class Solution {
  public:
    bool dfs(int node, int parent, vector<bool>&visit,vector<vector<int>>&adj){
        visit[node] = true;
        for(int x : adj[node]){
            if(!visit[x]){
                if(dfs(x,node,visit,adj)){
                    return true;
                }
            }
            else if(x != parent){
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>>adj(V);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>visit(V,false);
        for(int i=0;i<V;i++){
            if(!visit[i]){
                if(dfs(i,-1,visit,adj)){
                    return true;
                }
            }
        }
        return false;
    }
};