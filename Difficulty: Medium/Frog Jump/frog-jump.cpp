class Solution {
  public:
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        if(n == 1){
            return 0;
        }
        vector<int>dp(n);
        dp[0] = 0;
        dp[1] = abs(height[1]-height[0]);
        for(int i=2;i<n;i++){
            int onejump = dp[i-1] + abs(height[i] - height[i-1]);
            int twojump = dp[i-2] + abs(height[i] - height[i-2]);
            dp[i] = min(onejump,twojump);
        }
        return dp[n-1];
    }
};