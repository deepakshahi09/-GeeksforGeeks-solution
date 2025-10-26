class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();
        int start = 0;
        long long currSum = 0;
        
        for (int end = 0; end < n; end++) {
            currSum += arr[end];
            
            // Shrink the window from the left if sum > target
            while (currSum > target && start < end) {
                currSum -= arr[start];
                start++;
            }
            
            // If current sum matches the target, return 1-based indices
            if (currSum == target) {
                return {start + 1, end + 1};
            }
        }
        
        // No subarray found
        return {-1};
    }
};
