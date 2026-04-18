class Solution {
  public:
    bool check(string s) {
        if(s.size()==1){
            return true;
        }
        for(int i = 1;i<s.size();i++){
            if(s[i -1] != s[i]){
                return false;
            }
        }
        return true;
        // code here.
    }
};