class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if(high > low){
            int i = partition(arr,low,high);
            quickSort(arr,low,i-1);
            quickSort(arr,i+1,high);

        }

    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high];
        int i = low-1;
        for(int j =low;j<high;j++){
            if(arr[j] < pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        i++;
        swap(arr[i],arr[high]);
        return i;
        // code here
    }
};