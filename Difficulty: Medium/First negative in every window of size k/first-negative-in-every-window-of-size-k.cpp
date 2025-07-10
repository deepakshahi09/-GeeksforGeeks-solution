class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        vector<int> ans;
        int n = arr.size();
        int negIndex = 0; // Points to the first negative element in window

        for (int i = 0; i <= n - k; i++) {
            // Move negIndex to be within the current window
            while (negIndex < i + k && (negIndex < i || arr[negIndex] >= 0)) {
                negIndex++;
            }

            if (negIndex < i + k) {
                ans.push_back(arr[negIndex]);
            } else {
                ans.push_back(0);
            }
        }

        return ans;
    }
};
