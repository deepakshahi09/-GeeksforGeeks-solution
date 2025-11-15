// // User function template for C++
// class Solution {
//   public:
//     int count(int n, int prev){
//         if(n == 0){
//             return 1;
//         }
//         if(prev == 0){
//             return count(n-1,0) + count(n-1,1);
//         }
//         else{
//             return count(n-1,0);
//         }
//     }
//     // #define ll long long
//     int countStrings(int n) {
//         return count(n,0);
        
        
//     }
// };

class Solution {
  public:
    int count(int n, int prev, int dp[][2]) {
        if(n == 0) return 1; // base case

        if(dp[n][prev] != -1) return dp[n][prev]; // return already computed

        if(prev == 0)
            return dp[n][prev] = count(n-1, 0, dp) + count(n-1, 1, dp);
        else
            return dp[n][prev] = count(n-1, 0, dp);
    }

    int countStrings(int n) {
        int dp[45][2]; // n ≤ 44
        for(int i = 0; i <= 44; i++) {
            dp[i][0] = dp[i][1] = -1; // initialize memo table
        }
        return count(n, 0, dp); // start with prev = 0
    }
};
