class Solution {
  public:
    vector<string>st;
    void solve(int idx, string s, string curr){
        if(idx == s.size()){
            st.push_back(curr);
            return;
        }
        solve(idx+1,s,curr+" "+s[idx]);
        solve(idx+1,s,curr+s[idx]);
    }
    vector<string> permutation(string s) {
        // Code Here
        st.clear();
        string curr = "";
        curr+=s[0];
        solve(1,s,curr);
        sort(st.begin(),st.end());
        return st;
        
    }
};