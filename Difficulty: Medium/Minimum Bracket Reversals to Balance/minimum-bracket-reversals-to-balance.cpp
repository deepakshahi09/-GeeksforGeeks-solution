class Solution {
  public:
    int countMinReversals(string s) {
        // code here
        if(s.length() % 2 != 0)
            return -1;
        int op = 0;
        int cl = 0;
        for(char ch : s){
            if(ch == '{'){
                op++;
            }
            else {
                if(op > 0){
                    op--;
                }
                else{
                    cl++;
                }
            }
        }
        return((op+1)/2 + (cl+1)/2);
    }
};