
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        int freq[26] = {0};
        int i=0;
        while(i < s.size()){
            freq[s[i] - 'a']++;
            i++;
        }
        i = 0;
        while(i < s.size()){
            if(freq[s[i]-'a'] == 1){
                return s[i];
            }
            i++;
        }
        return '$';
    }
};