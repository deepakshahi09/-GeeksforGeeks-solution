// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        string rev = "";
        for(int i=s.size()-1;i>=0;i--){
            rev+=s[i];
        }
        return rev;
    }
};
