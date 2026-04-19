// User function Template for C++
class Solution {
  public:
    string delAlternate(string S) {
        // code here
        string ans = "";
        int i = 0;
        while(i < S.size()){
            ans = ans + S[i];
            i++;
            i++;
        }
        return ans;
    }
};