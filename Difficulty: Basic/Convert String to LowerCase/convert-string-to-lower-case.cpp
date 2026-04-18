// User function Template for C++

class Solution {
  public:
    string toLower(string& s) {
        // code here
        int i = 0;
        while(i < s.size()){
            s[i] = tolower(s[i]);\
            i++;
        }
        return s;
    }
};