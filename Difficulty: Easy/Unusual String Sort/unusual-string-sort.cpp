class Solution {
  public:
    string stringSort(string s) {
        int small[26] = {0};
        int up[26] = {0};
        
        int i = 0;
        while(i < s.size()){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                up[s[i] - 'A']++;
            }
            else{
                small[s[i] - 'a']++;
            }
            i++;
        }
        
        string u = "";
        string low = "";
        
        for(int i = 0; i < 26; i++){
            while(up[i]--){
                u += (char)(i + 'A');
            }
        }
        
        for(int i = 0; i < 26; i++){
            while(small[i]--){
                low += (char)(i + 'a');
            }
        }
        
        string ans = "";
        i = 0;
        int j = 0;
        
        while(i < u.size() || j < low.size()){
            if(i < u.size()){
                ans += u[i];
                i++;
            }
            if(j < low.size()){
                ans += low[j];
                j++;
            }
        }
        
        return ans;
    }
};