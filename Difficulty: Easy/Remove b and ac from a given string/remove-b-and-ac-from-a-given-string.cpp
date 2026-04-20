class Solution {
public:
    string stringFilter(string str) {
        
        int n = str.size();
        int j = 0;  // write pointer
        string ans = "";

        for(int i = 0; i < n; i++){
            
            // Case 1: skip 'b'
            if(str[i] == 'b'){
                continue;
            }
            
            // Case 2: skip "ac"
            if(str[i] == 'a' && i + 1 < n && str[i+1] == 'c'){
                i++; // skip 'c' also
                continue;
            }
            
            // otherwise keep character
            // str[j] = str[i];
            // j++;
            ans+=str[i];
        }
        return ans;

        // return str.substr(0, j);
    }
};