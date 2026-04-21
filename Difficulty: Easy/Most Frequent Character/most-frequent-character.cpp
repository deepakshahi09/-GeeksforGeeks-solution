class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int freq[26] = {0};
        int i =0;
        while(i < s.size()){
            freq[s[i] - 'a']++;
            i++;
        }
        char ans = 'a';
        int curr = 0;
       
        
        i = 0;
        while(i < 26){
            if(freq[i] > curr){
                curr = freq[i];
                ans = i + 'a';
            }
            i++;
        }
        return ans;
    }
};