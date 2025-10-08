class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        int n = arr.size();
        vector<int> res(n, -1);
        stack<int> st; 

        // Traverse the array twice to simulate circular behavior
        for (int i = 0; i < 2 * n; i++) {
            int curr = arr[i % n];

            // While current element is greater than stack's top element
            while (!st.empty() && arr[st.top()] < curr) {
                res[st.top()] = curr;
                st.pop();
            }

            // Only push index during first pass
            if (i < n) st.push(i);
        }

        return res;
    }
};