class Solution {
  public:
    
    int gcd(int a, int b){
        while(b != 0){
            int t = a % b;
            a = b;
            b = t;
        }
        return a;
    }
    
    int solve(int from, int to, int d){
        
        int step = 0;
        int a = 0, b = 0;
        
        while(a != d && b != d){
            
            if(a == 0){
                a = from;
                step++;
            }
            
            int pour = (a < (to - b)) ? a : (to - b);
            b += pour;
            a -= pour;
            step++;
            
            if(a == d || b == d) break;
            
            if(b == to){
                b = 0;
                step++;
            }
        }
        
        return step;
    }
    
    int minSteps(int m, int n, int d) {
        
        if(d > m && d > n) return -1;
        
        if(d == m || d == n) return 1;   // 🔥 FIX
        
        int g = gcd(m, n);
        if(d % g != 0) return -1;
        
        int ans1 = solve(m, n, d);
        int ans2 = solve(n, m, d);
        
        return (ans1 < ans2) ? ans1 : ans2;
    }
};