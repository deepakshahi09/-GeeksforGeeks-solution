class Solution {
  public:
    
    long solve(int a[], int n, int bound) {
        
        long count = 0;
        int left = 0;
        
        for(int right = 0; right < n; right++) {
            
            if(a[right] > bound) {
                left = right + 1;
            }
            
            count += (right - left + 1);
        }
        
        return count;
    }
    
    
    long countSubarrays(int a[], int n, int L, int R) {
        
        return solve(a, n, R) - solve(a, n, L - 1);
    }
};