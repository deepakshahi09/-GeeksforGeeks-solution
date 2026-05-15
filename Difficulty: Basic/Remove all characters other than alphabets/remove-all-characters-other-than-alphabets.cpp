// User function template for C++

class Solution {
  public:
    string removeSpecialCharacter(string s) {
        // code here
        string ans = "";
        for(char ch  :s){
            if((ch >='a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
                ans+=ch;
            }
        }
        if(ans.size() == 0){
            return "-1";
        }
        return ans;
    }
};