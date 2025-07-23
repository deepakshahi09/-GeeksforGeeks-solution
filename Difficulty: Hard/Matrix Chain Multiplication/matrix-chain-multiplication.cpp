class Solution {
  public:
    int dp[101][101];
    int minv(vector<int> &arr, int i, int j){
        if(i+1==j){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int res = INT_MAX;
        for(int k=i+1;k<j;k++){
            int curr = minv(arr,i,k) + minv(arr,k,j) + arr[i]*arr[j]*arr[k];
            res = min(curr,res);
        }
        return dp[i][j]=res;
        
    }
    int matrixMultiplication(vector<int> &arr) {
        int n = arr.size();
        for(int i=0;i<101;i++){
            for(int j=0;j<101;j++){
                dp[i][j] =-1;
            }
        }
        return minv(arr,0,n-1);
        // code here
        
    }
};