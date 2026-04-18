// User function template for C++
class Solution {
  public:

    string firstAlphabet(string s) {
        string ans = "";
        
        ans+=s[0];
        int i = 0;
        while(i < s.size()){
            if(s[i] == ' '){
                ans+=s[i+1];
                i++;
            }
            i++;
        }
        return ans;
        // Your code goes here
    }
};