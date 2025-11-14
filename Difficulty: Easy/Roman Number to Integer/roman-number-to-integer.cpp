class Solution {
  public:
  int val(char c){
            if(c == 'I') return 1;
            if(c == 'V') return 5;
            if(c == 'X') return 10;
            if(c == 'L') return 50;
            if(c == 'C') return 100;
            if(c == 'D') return 500;
            if(c == 'M') return 1000;
        }
    int romanToDecimal(string &s) {
        // code here
        
        int total = 0;
        int prev = 0;
        for(int i=s.size()-1;i>=0;i--){
            int curr = val(s[i]);
            if(curr < prev){
                total-=curr;
            }
            else{
                total+=curr;
            }
            prev = curr;
        }
        return total;
    }
};