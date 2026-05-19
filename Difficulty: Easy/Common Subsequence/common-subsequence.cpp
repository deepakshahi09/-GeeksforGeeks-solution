// User function template for C++
class Solution {
  public:
    bool commonSubseq(string a, string b) {
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                if(a[i] == b[j]){
                    return true;
                }
            }
        }
        return false;
        // your code here
        
    }
};