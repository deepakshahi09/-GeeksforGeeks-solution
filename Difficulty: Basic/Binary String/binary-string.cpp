class Solution {
  public:
    int binarySubstring(string& s) {
         int count1 = 0;
        int i = 0;
        
        // count number of '1'
        while(i < s.size()){
            if(s[i] == '1'){
                count1++;
            }
            i++;
        }
        
        // formula: k * (k - 1) / 2
        int ans = (count1 * (count1 - 1)) / 2;
        
        return ans;
        // code here
        
    }
};