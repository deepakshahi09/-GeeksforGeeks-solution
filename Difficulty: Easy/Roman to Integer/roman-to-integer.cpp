class Solution {
  public:
    int val(char ch){
            if(ch == 'I') return 1;
            if(ch == 'V') return 5;
            if(ch == 'X') return 10;
            if(ch == 'L') return 50;
            if(ch == 'C') return 100;
            if(ch == 'D') return 500;
            if(ch == 'M') return 1000;
    }
    int romanToDecimal(string &s) {
        int prev = 0;
        int total = 0;
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
        // code here
        
        
    }
};