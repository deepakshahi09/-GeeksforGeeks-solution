// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        if(n==0 || n==1){
            return n;
        }
        return nthFibonacci(n-1) + nthFibonacci(n-2);
        // code here
        
    }
};