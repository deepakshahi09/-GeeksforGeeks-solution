class Solution {
  public:
    int cutRod(vector<int> &price) {
        int n = price.size();
    
    // lengths array (1,2,3,...,n)
    vector<int> length(n);
    for(int i = 0; i < n; i++) {
        length[i] = i + 1;
    }

    // DP table
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    // Fill DP table
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {

            if(length[i - 1] <= j) {
                dp[i][j] = max(
                                price[i - 1] + dp[i][j - length[i - 1]],  // include (same row)
                                dp[i - 1][j]                               // exclude
                              );
            }
            else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][n];
    }
};
