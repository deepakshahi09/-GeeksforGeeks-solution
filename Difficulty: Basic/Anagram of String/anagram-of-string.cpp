class Solution {
  public:
    int remAnagram(string &s1, string &s2) {
        // code here
        int freq[26] = {0};
        int i = 0;
        while(i < s1.size()){
            freq[s1[i] - 'a']++;
            i++;
        }
        i = 0;
        while(i < s2.size()){
            freq[s2[i] - 'a']--;
            i++;
        }
        int ans = 0;
        i = 0;
        while(i < 26){
            if(freq[i] < 0){
                ans = ans - freq[i];
            }
            else{
                ans = ans+ freq[i];
            }
            i++;
        }
        return ans;
        
    }
};
