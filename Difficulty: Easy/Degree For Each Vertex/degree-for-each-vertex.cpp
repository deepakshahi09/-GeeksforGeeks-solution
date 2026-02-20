class Solution {
  public:
    vector<vector<int>> findInOutDegree(int V, vector<vector<int>>& edges) {
        // code here
        vector<int>indegree(V,0);
        vector<int>outdegree(V,0);
        
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            outdegree[v]++;
            indegree[u]++;
            
        }
        vector<vector<int>>ans(V,vector<int>(2));
        for(int i=0;i<V;i++){
            ans[i][1] = indegree[i];
            ans[i][0] = outdegree[i];
        }
        return ans;
    }
};