class Solution {
  public:
    vector<int> count(string s) {
        // code here.
        int up = 0;
        int low = 0;
        int num = 0;
        int sp = 0;
        
        for(char ch : s){
            if(ch >= 'a' && ch <= 'z'){
                low++;
            }
            else if(ch >='A' && ch <= 'Z'){
                up++;
            }
            else if(ch >= '0' && ch <= '9'){
                num++;
            }
            else{
                sp++;
            }
            
        }
        return {up,low,num,sp};
    }
};