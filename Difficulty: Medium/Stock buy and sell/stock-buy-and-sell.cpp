class Solution {
  public:
    int stockBuySell(vector<int> &arr) {
        int prof = 0;
        for(int i=1;i<arr.size();i++){
            if(arr[i] > arr[i-1]){
                prof = prof+(arr[i] - arr[i-1]);
            }
        }
        return prof;
        // code here
        
    }
};