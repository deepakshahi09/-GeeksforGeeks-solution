class Solution {
  public:
    int maxDepth(string &s) {
        // code here
        int cou = 0;
        int ans = 0;
        for(char ch : s){
            if(ch == '('){
                cou++;
                ans = max(ans,cou);
            }
            else if(ch == ')'){
                cou--;
            }
            
            
        }
        return ans;
    }
};