class Solution {
  public:
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        
        if(n == 1) return 0;
        int prev2 = 0;
        int prev1 = abs(height[1] - height[0]);
        
        
        for(int i=2;i<n;i++){
            int onejump = prev1 + abs(height[i] - height[i-1]);
            int twojump = prev2 + abs(height[i] - height[i-2]);
            int curr = min(onejump,twojump);
            prev2 = prev1;
            prev1 = curr;
            
        }
        return prev1;
    }
};