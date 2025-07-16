class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        vector<int>ans;
        int v = adj.size();
        vector<bool>visit(v,false);
        queue<int>q;
        q.push(0);
        visit[0] = true;
        
        while(!q.empty()){
            int nod = q.front();
            q.pop();
            ans.push_back(nod);
            for(int nei : adj[nod]){
                if(!visit[nei]){
                    q.push(nei);
                    visit[nei] = true;
                }
            }
            
        }
        return ans;
        
    }
};