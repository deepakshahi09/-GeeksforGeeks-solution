class Solution {
  public:
    int maxSum(int n) {
        if(n == 0){
            return 0;
        }
        int a = maxSum(n/2);
        int b = maxSum(n/3);
        int c = maxSum(n/4);
        
        return max(n,a+b+c);
        // code here.
    }
};