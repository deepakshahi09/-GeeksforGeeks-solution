class Solution {
  public:
    string concatenatedString(string s1, string s2) {
        int freq1[26] = {0};
        int freq2[26] = {0};
        
        int i = 0;
        
        // mark s1
        while(i < s1.size()){
            freq1[s1[i] - 'a'] = 1;
            i++;
        }
        
        i = 0;
        // mark s2
        while(i < s2.size()){
            freq2[s2[i] - 'a'] = 1;
            i++;
        }
        
        string ans = "";
        
        // process s1
        i = 0;
        while(i < s1.size()){
            if(freq2[s1[i] - 'a'] == 0){
                ans = ans + s1[i];
            }
            i++;
        }
        
        // process s2
        i = 0;
        while(i < s2.size()){
            if(freq1[s2[i] - 'a'] == 0){
                ans = ans + s2[i];
            }
            i++;
        }
        
        // if empty
        if(ans == ""){
            return "-1";
        }
        
        return ans;
        //  code here
        
    }
};