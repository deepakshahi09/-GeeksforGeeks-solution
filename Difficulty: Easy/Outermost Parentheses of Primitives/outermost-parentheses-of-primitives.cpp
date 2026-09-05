class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        int d = 0;
        string ans = "";
        for(char ch : s){
            if(ch == '('){
                if(d > 0){
                    ans+='(';
                }
                d++;
            }
            else{
                d--;
                if(d > 0){
                    ans+=')';
                }
            }
        }
        return ans;
    }
};