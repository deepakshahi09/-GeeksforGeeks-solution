class Solution {
  public:
    int maxLen(vector<int> &arr) {
        unordered_map<int, int> map;  // prefix sum → first index
        map[0] = -1;  // important: sum 0 at index -1 (handles full array sum = 0)

        int maxLength = 0;
        int sum = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            // Convert 0 to -1 to use prefix sum idea
            if (arr[i] == 0)
                sum += -1;
            else
                sum += 1;

            if (map.find(sum) != map.end()) {
                // If prefix sum seen before, subarray from map[sum]+1 to i has sum = 0
                int len = i - map[sum];
                maxLength = max(maxLength, len);
            } else {
                // First time this sum is seen
                map[sum] = i;
            }
        }

        return maxLength;
    }
};
