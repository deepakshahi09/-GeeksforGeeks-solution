class Solution {
  public:

    // Function to find minimum number of attempts needed in
    // order to find the critical floor.
    int eggDrop(int n, int k) {
        // code here
        vector<vector<int>>dp(k+1,vector<int>(n+1,0));
        int move = 0;
        while(dp[move][n] < k){
            move++;
            for(int e = 1; e <= n; e++){
                dp[move][e] = dp[move-1][e-1] + dp[move-1][e] + 1;
            }
        }
        return move;
    }
};