class Solution {
  public:
    string uncommonChars(string& s1, string& s2) {
        int freq1[26] = {0};
        int freq2[26]= {0};
        
        int i = 0;
        while(i < s1.size()){
            freq1[s1[i] - 'a'] = 1;
            i++;
        }
        
        i = 0;
        while(i < s2.size()){
            freq2[s2[i] - 'a'] = 1;
            i++;
        }
        
        string ans = "";
        int j = 0;
        while(j < 26){
            if((freq1[j] == 1 && freq2[j] == 0) || (freq1[j] == 0 && freq2[j] == 1)){
                ans.push_back('a' + j);
            }
            j++;
        }
        return ans;
        // code here
        
    }
};
