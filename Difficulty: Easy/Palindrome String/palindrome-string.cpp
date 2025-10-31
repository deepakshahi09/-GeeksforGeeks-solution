class Solution {
  public:
    bool isPalindrome(string& s) {
        int a = 0;
        int b = s.size()-1;
        while(a < b){
            if(s[a] != s[b]){
            return false;
                
            }
            a++;
            b--;
        }
        return true;
        // code here
        
    }
};