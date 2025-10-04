// User function Template for C++

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        stack<int>help;
        while(!st.empty()){
            int top = st.top();
            help.push(top);
            st.pop();
        }
        st.push(x);
        while(!help.empty()){
            int t = help.top();
            st.push(t);
            help.pop();
        }
        return st;
    }
};