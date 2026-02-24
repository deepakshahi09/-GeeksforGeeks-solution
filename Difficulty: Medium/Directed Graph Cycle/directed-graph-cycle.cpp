class Solution {
  public:
    bool dfs(int node, vector<int> adj[], vector<int>&visit,vector<int>&path){
        visit[node] = 1;
        path[node] = 1;
        for(int i=0;i<adj[node].size();i++){
            int x = adj[node][i];
            if(path[x] == 1){
                return true;
            }
            else if(visit[x] == 0){
                if(dfs(x,adj,visit,path)){
                    return true;
                }
            }
        }
        path[node] = 0;
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<int>adj[V];
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
        }
        vector<int>path(V,0);
        vector<int>visit(V,0);
        
        for(int i=0;i<V;i++){
            if(visit[i] == 0){
                if(dfs(i,adj,visit,path)){
                    return true;
                }
            }
        }
        return false;
    }
};