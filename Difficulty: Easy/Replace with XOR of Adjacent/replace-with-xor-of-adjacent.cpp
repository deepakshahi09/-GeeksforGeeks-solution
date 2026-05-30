class Solution {
  public:
    void replaceElements(vector<int>& arr) {
        int n = arr.size();
        
        int first = arr[0]^arr[1];
        
        vector<int>ans(n);
        for(int i=1;i<n-1;i++){
            ans[i] = arr[i-1]^arr[i+1];
        }
        int lst = arr[n-1] ^ arr[n-2];
        ans[0] = first;
        ans[n-1] = lst; 
        
        arr=ans;
        
        
        
    }
};