class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int n = arr.size();
        int xr = 0;

        // XOR of first k elements
        for (int i = 0; i < k; i++) {
            xr ^= arr[i];
        }

        int ans = xr;

        // Sliding window
        for (int i = k; i < n; i++) {
            xr ^= arr[i - k];  // remove element going out
            xr ^= arr[i];      // add new element
            ans = max(ans, xr);
        }

        return ans;
    }
};
