class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        int freq[26] = {0};
        
        int i = 0;
        while(i < s.size()){
            char ch = s[i];
            if(ch >= 'A' && ch <= 'Z'){
                ch = tolower(ch);
            }
            if(ch >= 'a' && ch <= 'z'){
                freq[ch - 'a'] = 1;
            }
            i++;
        }
        i = 0;
        while(i < 26){
            if(freq[i] == 0){
                return false;
            }
            i++;
        }
        return true;
    }
};