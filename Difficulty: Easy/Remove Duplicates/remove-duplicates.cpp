// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        int freq[26] = {0};
        
        int i = 0;
        string ans = "";
        while(i < s.size()){
            if(freq[s[i] - 'a'] == 0){
                ans+=s[i];
                freq[s[i] - 'a'] = 1;
            }
            i++;
        }
        return ans;
        // Your code goes here
    }
};