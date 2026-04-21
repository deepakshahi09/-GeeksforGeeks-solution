class Solution {
  public:
    string firstRepChar(string s) {
        int freq[26] = {0};
        int i = 0;
        
        while(i < s.size()){
            if(freq[s[i]-'a'] == 1){
                string ans = "";
                ans+=s[i];
                return ans;
            }
            else{
                freq[s[i]-'a']++;
            }
            i++;
        }
        return "-1";
        // code here.
    }
};