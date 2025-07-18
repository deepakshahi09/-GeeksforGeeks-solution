class Solution {
  public:
    void binSort(vector<int> &arr) {
        // code here
        int zeroCount = 0;
        int n = arr.size();
        
        // Count number of 0s
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0)
                zeroCount++;
        }

        // Fill 0s
        for (int i = 0; i < zeroCount; i++) {
            arr[i] = 0;
        }

        // Fill 1s
        for (int i = zeroCount; i < n; i++) {
            arr[i] = 1;
        }
    }
};
