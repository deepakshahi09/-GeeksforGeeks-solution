class Solution {
  public:
    bool dfs(int node, int parent,vector<vector<int>>&edge,vector<bool>&visit){
        visit[node] = true;
        for(int neigh : edge[node]){
            if(!visit[neigh]){
                if(dfs(neigh,node,edge,visit)){
                    return true;
                }
            }
            else if(neigh != parent){
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
        for(int i=0;i<edges.size();i++){
            if(!visit[i]){
                if(dfs(i,-1,adj,visit)){
                    return true;
                }
            }
        }
        return false;
    }
};