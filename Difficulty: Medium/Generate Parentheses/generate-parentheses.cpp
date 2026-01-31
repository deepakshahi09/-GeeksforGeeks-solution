class Solution {
public:
    vector<string> ans;

    void solve(int open, int close, int n, string curr) {
        if (curr.size() == n) {
            ans.push_back(curr);
            return;
        }

        if (open < n / 2) {
            solve(open + 1, close, n, curr + "(");
        }

        if (close < open) {
            solve(open, close + 1, n, curr + ")");
        }
    }

    vector<string> generateParentheses(int n) {
        ans.clear();
        solve(0, 0, n, "");
        return ans;
    }
};
