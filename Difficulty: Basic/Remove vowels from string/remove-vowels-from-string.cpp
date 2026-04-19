class Solution {
  public:
    string removeVowels(string& s) {
        
        string ans = "";
        int i = 0;

        while(i < s.size()){

            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
                ans += s[i];
            }

            i++;
        }

        return ans;
    }
};