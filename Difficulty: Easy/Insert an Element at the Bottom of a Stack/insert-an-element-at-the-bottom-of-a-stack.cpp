// User function Template for C++

// class Solution {
//   public:
//     stack<int> insertAtBottom(stack<int> st, int x) {
//         stack<int>help;
//         while(!st.empty()){
//             int top = st.top();
//             help.push(top);
//             st.pop();
//         }
//         st.push(x);
//         while(!help.empty()){
//             int t = help.top();
//             st.push(t);
//             help.pop();
//         }
//         return st;
//     }
// };

class Solution {
public:
    // Function to insert an element at the bottom of the stack
    stack<int> insertAtBottom(stack<int> st, int x) {
        // Base case: if stack is empty, push x and return
        if (st.empty()) {
            st.push(x);
            return st;
        }

        // Remove the top element
        int top = st.top();
        st.pop();

        // Recursive call to insert x at bottom of smaller stack
        st = insertAtBottom(st, x);

        // Push the top element back after inserting x
        st.push(top);

        return st;
    }
};
