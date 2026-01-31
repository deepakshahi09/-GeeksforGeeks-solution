class Solution {
  public:
    vector<string>se;
    void st(string s, string curr){
        if(s.empty()){
            se.push_back(curr);
            return;
        }
        st(s.substr(1),curr + s[0]);
        st(s.substr(1),curr);
    }
    vector<string> AllPossibleStrings(string s) {
        se.clear();
        st(s,"");
        sort(se.begin(),se.end());
        return se;
        // Code here
        
    }
};