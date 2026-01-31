// User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution {
  public:
    vector<string>ans;
    void solve(int op, int cl, int n, string curr){
        if(curr.size() == n){
            ans.push_back(curr);
            return;
        }
        if(op < n/2){
            solve(op+1,cl,n,curr+"(");
        }
        if(cl < op){
            solve(op, cl+1, n, curr+ ")");
        }
    }
    vector<string> generateParentheses(int n) {
        // code here
        ans.clear();
        solve(0,0,n,"");
        return ans;
        
    }
};