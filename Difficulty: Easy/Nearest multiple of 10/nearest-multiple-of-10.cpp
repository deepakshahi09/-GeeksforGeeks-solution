
class Solution {
  public:
    string roundToNearest(string& s) {
        int n = s.size();
        int last = s[n-1] - '0';
        if(last <= 5){
            s[n-1] = '0';
            return s;
        }
        
        int i = n-2;
        
        while(i >= 0){
            if(s[i] == '9'){
                s[i] = '0';
                i--;
            }
            else{
                s[i] = s[i]+1;
                break;
            }
            
        }
        if(i<0){
            s = '1'+s;
        }
        s[s.size()-1]='0';
        return s;
        

    }
};