class Solution {
  public:
    int minDifference(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for(int i : arr){
            sum+=i;
        }
        int target = sum/2;
        vector<int>dp(target+1,false);
        dp[0] = true;
        
        for(int i=0;i<n;i++){
            for(int j=target;j>=arr[i];j--){
                dp[j] = dp[j] || dp[j-arr[i]];
            }
            
        }
        int s1 = 0;
        for(int i=target;i>=0;i--){
            if(dp[i]){
                s1 = i;
                break;
            }
        }
        return sum - 2*s1;
        
    }
};
