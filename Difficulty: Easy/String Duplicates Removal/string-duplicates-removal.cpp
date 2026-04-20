// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        int freq[256] = {0};
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(freq[s[i]] == 0){
                ans+=s[i];
                freq[s[i]] = 1;
            }
        }
        return ans;
    }
};