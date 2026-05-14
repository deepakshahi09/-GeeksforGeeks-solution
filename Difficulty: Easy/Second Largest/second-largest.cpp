class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int mx = arr[0];
        int sm = INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i] > mx){
                sm = mx;
                mx = arr[i];
            }
            else if(arr[i] != mx && arr[i] > sm){
                sm = arr[i];
            }
        }
        if(sm == INT_MIN){
            return -1;
        }
        return sm;
    }
};