class Solution {

  public:
    int minDifference(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for(int x : arr){
            sum+=x;
        }
        int target = sum/2;
        vector<bool>dp(target+1,false);
        dp[0] = true;
        for(int i=0;i<n;i++){
            for(int j=target;j>=arr[i];j--){
                dp[j] = dp[j] || dp[j-arr[i]];
            }
        }
        int s1 = 0;
        for(int j=target;j>=0;j--){
            if(dp[j]){
                s1 = j;
                break;
            }
        }
        return sum - 2*s1;
        // Your code goes here
    }
};
