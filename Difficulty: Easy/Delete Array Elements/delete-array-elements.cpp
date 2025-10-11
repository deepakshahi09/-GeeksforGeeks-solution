class Solution {
public:
    vector<int> deleteElement(vector<int>& arr, int k) {
        stack<int> st;
        for (int i = 0; i < arr.size(); i++) {
            while (!st.empty() && k > 0 && st.top() < arr[i]) {
                st.pop();
                k--;
            }
            st.push(arr[i]);
        }

        // Transfer stack to vector
        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        // Only trim from the end if k > 0
       

        return ans;
    }
};
