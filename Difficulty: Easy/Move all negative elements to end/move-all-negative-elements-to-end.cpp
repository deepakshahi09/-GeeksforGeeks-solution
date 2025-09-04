class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        int n = arr.size();
        int cp[n];
        int j = 0;
        for(int i : arr){
            if(i>=0){
                cp[j] = i;
                j++;
            }
        }
        for(int i : arr){
            if(i<0){
                cp[j] = i;
                j++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i] = cp[i];
        }
        // Your code goes here
    }
};