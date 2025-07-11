class Solution {
  public:
    int longestSubarrayDivK(vector<int>& arr, int k) {
        map<int, int> seen;
        long long sum = 0;
        int maxLen = 0;

        seen[0] = -1; // handles subarrays starting from index 0

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            int rem = ((sum % k) + k) % k; // safe normalization

            if (seen.find(rem) != seen.end()) {
                maxLen = max(maxLen, i - seen[rem]);
            } else {
                seen[rem] = i; // store only first occurrence
            }
        }

        return maxLen;
    }
};
