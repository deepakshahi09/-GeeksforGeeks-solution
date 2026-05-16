// User function Template for C++

class Solution {
  public:
   
    int kLevelSum(string s, int k) {
        int n = s.size();
        int level = -1;
        int sum = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                level++;
            }
            if(s[i] == ')'){
                level--;
            }
            
            if(level == k && isdigit(s[i])){
                string str = "";
                while(i < s.size() && isdigit(s[i])){
                    str+=s[i];
                    i++;
                }
                sum+=stoi(str);
                i--;
            }
            
            
        }
        return sum;
        // code here
        
    }
};