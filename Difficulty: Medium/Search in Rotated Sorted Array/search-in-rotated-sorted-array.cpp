class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        int st = 0;
        int lst = arr.size()-1;
        while(st<=lst){
            int mid = (st+lst)/2;
            if(arr[mid] == key){
                return mid;
            }
            if(arr[st] <= arr[mid]){
                if(key >= arr[st] && key < arr[mid]){
                    lst = mid-1;
                }
                else{
                    st = mid+1;
                }
            }
            else{
                if(key >= arr[mid] && key <= arr[lst]){
                    st = mid+1;
                }
                else{
                    lst = mid-1;
                }
            }
        }
        return -1;
    }
};