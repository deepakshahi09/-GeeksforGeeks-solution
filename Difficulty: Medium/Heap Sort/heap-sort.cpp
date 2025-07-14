// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
    
  public:
    void maxHeap(vector<int>&arr, int n, int i){
        int small = i;
        int left = i * 2 + 1;
        int right = i * 2 + 2;
        if(left < n && arr[left] > arr[small]){
            small = left;
        }
        if(right < n && arr[right] > arr[small]){
            small = right;
        }
        if(small != i){
            swap(arr[i],arr[small]);
            maxHeap(arr,n,small);
        }
    }
    // Function to sort an array using Heap Sort.
    void heapSort(vector<int>& arr) {
        int n  = arr.size();
        for(int i=n/2-1;i>=0;i--){
            maxHeap(arr,n,i);
        }
        for(int i=n-1;i>0;i--){
            swap(arr[0],arr[i]);
            maxHeap(arr,i,0);
        }
        // code here
        
    }
};