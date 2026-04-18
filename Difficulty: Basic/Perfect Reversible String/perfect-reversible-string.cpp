

class Solution {
  public:
    int isReversible(string str, int n) {
        int i = 0;
        int j = n-1;
        while(i<j){
            if(str[i] != str[j]){
                return 0;
            }
            i++;
            j--;
        }
        return 1;
        // complete the function here
    }
};