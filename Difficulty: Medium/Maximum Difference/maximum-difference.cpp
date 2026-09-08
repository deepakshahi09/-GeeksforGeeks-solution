class Solution {
  public:
    int findMaxDiff(vector<int> &arr) {

        int n = arr.size();

        stack<int> st;
        vector<int> left(n);
        vector<int> right(n);

        for(int i = 0; i < n; i++) {

            while(!st.empty() && st.top() >= arr[i]) {
                st.pop();
            }

            if(st.empty()) {
                left[i] = 0;
            }
            else {
                left[i] = st.top();
            }

            st.push(arr[i]);
        }

        while(!st.empty()) {
            st.pop();
        }

        for(int i = n-1; i >= 0; i--) {

            while(!st.empty() && st.top() >= arr[i]) {
                st.pop();
            }

            if(st.empty()) {
                right[i] = 0;
            }
            else {
                right[i] = st.top();
            }

            st.push(arr[i]);
        }

        int ans = 0;

        for(int i = 0; i < n; i++) {
            ans = max(ans, abs(left[i] - right[i]));
        }

        return ans;
    }
};