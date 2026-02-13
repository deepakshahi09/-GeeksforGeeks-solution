class Solution {
  public:
    int findMaxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(n==1){
            return arr[0];
            
        }
        int prev2 = arr[0];
        int prev = max(arr[0], arr[1]);
        
        for(int i=2;i<n;i++){
            int curr = max(arr[i]+prev2, prev);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};