class Solution {
  public:
    bool canFormPalindrome(string &s) {
        // code here
        int freq[26] = {0};
        
        for(int i=0;i<s.size();i++){
            freq[s[i] - 'a'] ++;
        }
        int odd = 0;
        int j = 0;
        while(j < 26){
            if(freq[j] % 2 != 0){
                odd++;
                if(odd > 2){
                    return false;
                }
            }
            j++;
        }
        if(odd <= 1){
            return true;
        }
        return false;
    }
};