class Solution {
  public:
  
    void backtrack(string &s, vector<int> &vis, string &curr, vector<string> &res) {
        if (curr.size() == s.size()) {
            res.push_back(curr);
            return;
        }
        
        for (int i = 0; i < s.size(); i++) {
            if (vis[i]) continue;
            
            // skip duplicate characters
            if (i > 0 && s[i] == s[i - 1] && !vis[i - 1])
                continue;
            
            vis[i] = 1;
            curr.push_back(s[i]);
            backtrack(s, vis, curr, res);
            curr.pop_back();
            vis[i] = 0;
        }
    }
    
    vector<string> findPermutation(string &s) {
        vector<string> res;
        sort(s.begin(), s.end());   // important step
        
        vector<int> vis(s.size(), 0);
        string curr = "";
        
        backtrack(s, vis, curr, res);
        return res;
    }
};
