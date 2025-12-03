class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int st = 0;
        int lst = arr.size()-1;
        int ans = -1;
        while(st<=lst){
            int mid = st + (lst - st)/2;
            if(arr[mid] == k){
                ans = mid;
                lst = mid-1;
            }
            else if(arr[mid] > k){
                lst = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    }
};
