class Solution {
  public:
    int minIndexChar(string &s1, string &s2) {
        int freq[26] = {0};
        int i = 0;
        while(i < s2.size()){
            freq[s2[i] -'a']++;
            i++;
        }
        
        i = 0;
        while(i < s1.size()){
            if(freq[s1[i] -'a'] != 0){
                return i;
            }
            i++;
        }
        return -1;
        //  code here
        
    }
};