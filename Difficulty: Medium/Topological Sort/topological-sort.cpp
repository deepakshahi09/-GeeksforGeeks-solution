class Solution {
  public:
    void dfs(int node,vector<vector<int>>&adj, vector<bool>&visit,stack<int>&st){
        visit[node] = true;
        for(int x : adj[node]){
            if(!visit[x]){
                dfs(x,adj,visit,st);
            }
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<bool>visit(V,false);
        stack<int>st;
        vector<vector<int>>adj(V);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
        }
        
        for(int i=0;i<V;i++){
            if(!visit[i]){
                dfs(i,adj,visit,st);
            }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};