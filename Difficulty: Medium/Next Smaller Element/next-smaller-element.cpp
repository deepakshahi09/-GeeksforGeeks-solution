class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1);   // store next smaller elements
        stack<int> st;            // stack to keep track of potential NSEs

        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            // Remove elements that are not smaller
            while (!st.empty() && st.top() >= arr[i]) {
                st.pop();
            }

            // If stack not empty, top is next smaller
            if (!st.empty()) {
                ans[i] = st.top();
            }

            // Push current element for future comparisons
            st.push(arr[i]);
        }

        return ans;
    }
};
