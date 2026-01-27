class Solution {
  public:
    int single(vector<int>& arr) {
        // code here
        int st = 0;
        int lst = arr.size()-1;
        while(st < lst){
            int mid = (st+lst)/2;
            if(mid % 2 == 1){
                mid--;
            }
            if(arr[mid] == arr[mid+1]){
                st = mid+2;
            }
            else{
                lst = mid;
            }
        }
        return arr[st];
    }
};