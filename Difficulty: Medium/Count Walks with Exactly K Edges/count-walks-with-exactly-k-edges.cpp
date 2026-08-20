class Solution {
public:
    int minimumWalk(vector<vector<int>> &adj, int u, int v, int k) {

        int n = adj.size();
        int mod = 1000000007;

        vector<vector<int>> dp(k + 1, vector<int>(n, 0));

        // 0 edges me u se u tak 1 way
        dp[0][u] = 1;

        for (int step = 1; step <= k; step++) {

            for (int i = 0; i < n; i++) {

                for (int j = 0; j < n; j++) {

                    if (adj[i][j] == 1) {

                        dp[step][j] =
                            (dp[step][j] + dp[step - 1][i]) % mod;
                    }
                }
            }
        }

        return dp[k][v];
    }
};