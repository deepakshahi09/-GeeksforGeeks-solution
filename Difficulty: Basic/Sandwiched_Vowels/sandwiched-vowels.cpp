class Solution {
public:
    string Sandwiched_Vowel(string &s) {
        string ans = "";
        int i = 0;

        while(i < s.size()){
            
            // check vowel
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                
                // check sandwiched
                if(i > 0 && i < s.size()-1){
                    if((s[i-1] != 'a' && s[i-1] != 'e' && s[i-1] != 'i' && s[i-1] != 'o' && s[i-1] != 'u') &&
                       (s[i+1] != 'a' && s[i+1] != 'e' && s[i+1] != 'i' && s[i+1] != 'o' && s[i+1] != 'u')){
                        i++;
                        continue;
                    }
                }
            }

            ans.push_back(s[i]); // ✅ fast
            i++;
        }

        return ans;
    }
};