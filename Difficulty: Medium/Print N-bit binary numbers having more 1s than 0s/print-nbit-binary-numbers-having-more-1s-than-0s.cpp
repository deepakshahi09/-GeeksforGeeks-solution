

class Solution {
public:
    vector<string> ans;

    void solve(int n, int ones, int zeros, string curr) {
        // base case
        if (curr.length() == n) {
            ans.push_back(curr);
            return;
        }

        // always add '1'
        solve(n, ones + 1, zeros, curr + '1');

        // add '0' only if ones > zeros
        if (ones > zeros) {
            solve(n, ones, zeros + 1, curr + '0');
        }
    }

    vector<string> NBitBinary(int n) {
        ans.clear();
        solve(n, 0, 0, "");
        return ans;  // already in decreasing order
    }
};
