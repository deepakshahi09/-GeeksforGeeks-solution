class Solution {
  public:
    int findMissing(vector<int>& arr) {
        int n = arr.size();
        int l = arr[1] - arr[0];

        for (int i = 2; i < n; i++) {
            if (arr[i - 1] != arr[i] - l) {
                return arr[i] - l;
            }
        }

        return arr[n - 1] + l;
    }
};
