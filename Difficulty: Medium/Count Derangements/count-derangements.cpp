class Solution {
  public:
    int derangeCount(int n) {
        if(n==1) return 0;
        if(n==2) return 1;
        int i = 3;
        int a = 0;
        int b = 1;
        int c = 0;
        while(i<=n){
            c = (i-1)*(a+b);
           a = b;
           b = c;
           i++;
        }
        return b;
        // code here
        
    }
};