class Solution {
  public:
    char firstRep(string s) {
        int freq[26] = {0};
        int i = 0;
        while(i < s.size()){
            char ch = s[i];
            freq[ch - 'a']++;
            i++;
        }
        
        i = 0;
        while(i < s.size()){
            if(freq[s[i] - 'a'] > 1){
                return s[i];
            }
            i++;
        }
        return '#';
        
        // code here.
    }
};