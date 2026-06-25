class Solution {
  public:
    vector<int> findOrder(int n, vector<vector<int>> &p) {
        vector<int>adj[n];
        vector<int>indegree(n,0);
        for(int i=0;i<p.size();i++){
            int u = p[i][0];
            int v = p[i][1];
            adj[v].push_back(u);
            indegree[v]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        vector<int>ans;
        int count = 0;
        while(!q.empty()){
            int fr = q.front();
            q.pop();
            count++;
            
            for(int i:adj[fr]){
                indegree[i]--;
                if(indegree[i] == 0){
                    q.push(i);
                }
            }
        }
        vector<int>temp;
        if(count != n){
            return temp;
        }
        return ans;
        
    }
};