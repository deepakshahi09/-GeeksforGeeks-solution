class Solution {
  public:
    int kn(vector<int>&wt, vector<int>&val, vector<vector<int>>&dp, int n, int w){
        if(n == 0 || w == 0){
            return 0;
        }
        if(dp[n][w] != -1){
            return dp[n][w];
        }
        if(wt[n-1] <= w){
            return dp[n][w] = max(val[n-1] + kn(wt,val,dp,n-1,w-wt[n-1]) , kn(wt,val,dp,n-1,w));
        }
        else{
            return dp[n][w] = kn(wt,val,dp,n-1,w);
        }
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n = val.size();
        vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
        return kn(wt,val,dp,n,W);
       
        
    }
};