// class Solution {
//   public:
//     vector<int> findOrder(int n, vector<vector<int>> &p) {
//         vector<int>adj[n];
//         vector<int>indegree(n,0);
//         for(int i=0;i<p.size();i++){
//             int u = p[i][0];
//             int v = p[i][1];
//             adj[v].push_back(u);
//             indegree[v]++;
//         }
//         queue<int>q;
//         for(int i=0;i<n;i++){
//             if(indegree[i] == 0){
//                 q.push(i);
//             }
//         }
//         vector<int>ans;
//         int count = 0;
//         while(!q.empty()){
//             int fr = q.front();
//             q.pop();
//             count++;
            
//             for(int i:adj[fr]){
//                 indegree[i]--;
//                 if(indegree[i] == 0){
//                     q.push(i);
//                 }
//             }
//         }
//         vector<int>temp;
//         if(count != n){
//             return temp;
//         }
//         return ans;
        
//     }
// };



















class Solution {
public:
    bool dfs(int node, vector<int> adj[], vector<int> &vis,
             vector<int> &path, vector<int> &ans) {

        vis[node] = 1;
        path[node] = 1;

        for(int it : adj[node]){

            if(!vis[it]){
                if(dfs(it, adj, vis, path, ans))
                    return true;
            }
            else if(path[it]){
                return true;
            }
        }

        path[node] = 0;
        ans.push_back(node);

        return false;
    }

    vector<int> findOrder(int n, vector<vector<int>> &p) {

        vector<int> adj[n];

        for(int i=0;i<p.size();i++){
            int u = p[i][0];
            int v = p[i][1];

            adj[v].push_back(u);
        }

        vector<int> vis(n,0);
        vector<int> path(n,0);
        vector<int> ans;

        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(dfs(i, adj, vis, path, ans))
                    return {};
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
















