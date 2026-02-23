


                              // using bfs



// class Solution {
//   public:
//     void dfs(int node,vector<vector<int>>&adj, vector<bool>&visit,stack<int>&st){
//         visit[node] = true;
//         for(int x : adj[node]){
//             if(!visit[x]){
//                 dfs(x,adj,visit,st);
//             }
//         }
//         st.push(node);
//     }
//     vector<int> topoSort(int V, vector<vector<int>>& edges) {
//         // code here
//         vector<bool>visit(V,false);
//         stack<int>st;
//         vector<vector<int>>adj(V);
//         for(int i=0;i<edges.size();i++){
//             int u = edges[i][0];
//             int v = edges[i][1];
//             adj[u].push_back(v);
//         }
        
//         for(int i=0;i<V;i++){
//             if(!visit[i]){
//                 dfs(i,adj,visit,st);
//             }
//         }
//         vector<int>ans;
//         while(!st.empty()){
//             ans.push_back(st.top());
//             st.pop();
//         }
//         return ans;
//     }
// };

                        //using dfs
                        
                        
class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>>adj(V);
        vector<int>indegree(V,0);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            indegree[v]++;
        }
        vector<int>ans;
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(int nei : adj[node]){
                indegree[nei]--;
                if(indegree[nei] == 0){
                    q.push(nei);
                }
            }
        }
        return ans;
        // code here
        
    }

    
    
    
};