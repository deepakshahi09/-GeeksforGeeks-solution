// User function template for C++
class Solution {
  public:

    vector<string> pattern(string& s) {
        vector<string>pat;
        string ans = "";
        for(int i=0;i<s.size();i++){
            ans = ans + s[i];
            pat.push_back(ans);
        }
        reverse(pat.begin(),pat.end());
        return pat;
        // Your code goes here
    }
};