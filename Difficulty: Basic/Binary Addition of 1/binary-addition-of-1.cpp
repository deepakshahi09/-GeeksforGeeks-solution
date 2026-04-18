// User function Template for C++

class Solution {
  public:
    string binaryAdd(int n, string s) {
        // code here
        int i = n-1;
        while(i>=0){
            if(s[i] == '0'){
                s[i] = '1';
                return s;
            }
            else{
                s[i] = '0';
                i--;
            }
        }
        return "1"+s;
    }
};