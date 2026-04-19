
class Solution {
  public:
    string convert(string& s) {
        int i =0;
        s[0] = s[i] = toupper(s[i]);
        i++;
        while(i < s.size()){
            if(s[i -1] == ' '){
                s[i] = toupper(s[i]);
            }
            i++;
        }
        return s;
        // code here
        
    }
};