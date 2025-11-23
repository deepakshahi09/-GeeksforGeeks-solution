// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int n = arr.size();
        int l = arr[1] - arr[0];
        
        for(int i=2;i<n;i++){
            if(arr[i] - l != arr[i-1]){
                return arr[i] - l;
            }
        }
        return arr[n-1] + l;
    }
};