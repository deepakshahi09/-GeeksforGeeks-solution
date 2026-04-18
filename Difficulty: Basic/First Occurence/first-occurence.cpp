class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
        int n = txt.size();
        int m = pat.size();
        
        int i = 0;
        while(i <= n-m){
            int j = 0;
            while(j < m && txt[i+j] == pat[j]){
                j++;
            }
            if(j == m){
                return i;
            }
            i++;
        }
        return -1;
    }
};