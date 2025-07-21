class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Merge both arrays
        for (int i : b) {
            a.push_back(i);
        }

        // Sort the merged array
        sort(a.begin(), a.end());

        // Store unique elements
        vector<int> ans;
        for (int i = 0; i < a.size(); i++) {
            if (i == 0 || a[i] != a[i - 1]) {
                ans.push_back(a[i]);
            }
        }

        return ans;
    }
};
