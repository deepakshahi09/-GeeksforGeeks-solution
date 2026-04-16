
class Solution {
  public:
    string removeConsonants(string s) {
        string ans = "";
        int i = 0;
        while(i < s.size()){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){

                ans.push_back(s[i]);                
            }
            i++;

            
        }
        if(ans.size() == 0){
            return "No Vowel";
        }
        return ans;
        // complete the function heredef removeConsonants(s):
    }
};