class Solution {
  public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int>adj[n];
        vector<int>indegree(n,0);
        for(int i=0;i<p.size();i++){
            int u = p[i][0];
            int v = p[i][1];
            adj[v].push_back(u);
            indegree[u]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        int count = 0;
        while(!q.empty()){
            int top = q.front();
            count++;
            q.pop();
            for(int i : adj[top]){
                indegree[i]--;
                if(indegree[i] == 0){
                    q.push(i);
                }
            }
        }
        return count == n;
        
    }
};