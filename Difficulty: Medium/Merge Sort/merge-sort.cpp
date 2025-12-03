class Solution {
  public:
    void mergeArrays(vector<int>& arr, int l, int m, int r) {
        vector<int> temp(r - l + 1);
        int i = l;
        int j = m + 1;
        int k = 0;

        while(i <= m && j <= r) {
            if(arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
            }
        }

        while(i <= m) {
            temp[k++] = arr[i++];
        }

        while(j <= r) {
            temp[k++] = arr[j++];
        }

        for(int x = l; x <= r; x++) {
            arr[x] = temp[x - l];
        }
    }

    void mergeSortRec(vector<int>& arr, int l, int r) {
        if(l >= r) return;
        int m = (l + r) / 2;
        mergeSortRec(arr, l, m);
        mergeSortRec(arr, m + 1, r);
        mergeArrays(arr, l, m, r);
    }

    void mergeSort(vector<int>& arr, int l, int r) {
        mergeSortRec(arr, l, r);
    }
};
