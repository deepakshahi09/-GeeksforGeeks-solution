// User function Template for C++
class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        // code here
        int st = 0;
        int lst = arr.size()-1;
        while(st<=lst){
            int mid = (st+lst)/2;
            if(arr[mid] == target){
                return mid;
            }
            if(mid > st && arr[mid-1] == target){
                return mid-1;
            }
            if(mid < lst && arr[mid+1] == target){
                return mid+1;
            }
            else if(arr[mid] < target){
                st = mid+1;
            }
            else{
                lst = mid-1;
            }
            
        }
        return -1;
    }
};