class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        
        string ans = "";
        ans+=s[0];
        
        int i = 1;
        while(i < s.size()){
            if(s[i] != s[i-1]){
                ans+=s[i];
            }
            i++;
        }
        return ans;
        
        // code here.
    }
};