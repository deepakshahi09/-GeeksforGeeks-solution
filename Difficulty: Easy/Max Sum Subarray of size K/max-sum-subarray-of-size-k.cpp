class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int mx  = 0;
        int sum  = 0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        mx = sum;
        for(int i=k;i<arr.size();i++){
            sum = (sum+arr[i]) - arr[i-k];
            mx= max(mx,sum);
        }
        return mx;
    }
};