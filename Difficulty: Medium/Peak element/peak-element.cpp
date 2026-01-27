class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int st = 0;
        int lst = arr.size()-1;
        while(st<lst){
            int mid = (st+lst)/2;
            if(arr[mid] < arr[mid+1]){
                st = mid+1;
            }
            else{
                lst = mid;
            }
        }
        return st;
    }
};