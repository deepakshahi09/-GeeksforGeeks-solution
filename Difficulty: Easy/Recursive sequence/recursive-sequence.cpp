// User function Template for C++

class Solution {
  public:
    long long sequence(int n) {
        // code here
        long long ans = 0;
        long long mod = 1e9 + 7;
        long long num = 1;
        for(int i=1;i<=n;i++){
            long long term = 1;
            for(int j = 1;j<=i;j++){
                term = (term * num) % mod;
                num++;
            }
            ans = (ans + term) % mod;
        }
        return ans;
    }
};