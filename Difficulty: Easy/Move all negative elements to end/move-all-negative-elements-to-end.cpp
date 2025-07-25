class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        int n = arr.size();
        int ar[n];
        int j = 0;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                ar[j] = arr[i];
                j++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i] < 0){
                ar[j] = arr[i];
                j++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i] = ar[i];
        }
        // Your code goes here
    }
};