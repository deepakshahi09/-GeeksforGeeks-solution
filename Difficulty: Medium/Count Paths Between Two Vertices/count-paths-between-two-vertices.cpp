class Solution {
    private:
    int dfs(int src, int des, int &c,vector<int>&dp,vector<vector<int>>&adj){
        if(src == des){
            return 1;
        }
        if(dp[src] != -1){
            return dp[src];
        }
        int way = 0;
        for(auto it : adj[src]){
            
               way+= dfs(it,des,c,dp,adj);
            
        }
        return dp[src] = way;
    }
  public:
    int countPaths(int V, vector<vector<int>>& edges, int src, int dest) {
        // code here
        vector<vector<int>>adj(V);
        for(auto it : edges){
            adj[it[0]].push_back(it[1]);
        }
        int c = 0;
        vector<int>dp(V,-1);
        return dfs(src,dest,c,dp,adj);
        
    }
};