class Solution {
  public:
    void dfs(int node,vector<bool>&visit,vector<int>&ans,vector<int>adj[]){
        visit[node] = true;
        ans.push_back(node);
        for(int i:adj[node]){
            if(!visit[i]){
                dfs(i,visit,ans,adj);
            }
        }
    }
    vector<vector<int>> getComponents(int v, vector<vector<int>>& edges) {
        // code here
        vector<int>adj[v];
        for(auto it : edges){
            int u = it[0];
            int w =it[1];
            adj[u].push_back(w);
            adj[w].push_back(u);
            
        }
        vector<bool>visit(v,false);
        vector<vector<int>>finalanswer;
       
        for(int i=0;i<v;i++){
            if(!visit[i]){
                 vector<int>ans;
                dfs(i,visit,ans,adj);
                finalanswer.push_back(ans);
            }
        }
        return finalanswer;
        
    }
};
