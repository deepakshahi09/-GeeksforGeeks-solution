
class Solution {
  public:
    bool isMaxHeap(int arr[], int n) {
        for(int i=0;i<(n/2);i++){
            int left = i*2+1;
            int right = i*2+2;
            if(left < n && arr[i] < arr[left]){
                return false;
            }
            if(right < n && arr[i] < arr[right]){
                return false;
            }
        }
        return true;
        // Your code goes here
    }
};