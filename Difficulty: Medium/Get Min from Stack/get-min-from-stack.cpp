class SpecialStack {
  public:
  stack<int>st;
    SpecialStack() {
        // Define Stack
    }

    void push(int x) {
        st.push(x);
        // Add an element to the top of Stack
    }

    void pop() {
        st.pop();
        // Remove the top element from the Stack
    }

    int peek() {
        if(st.empty()){
            return -1;
        }
        return st.top();
        // Returns top element of the Stack
    }

    bool isEmpty() {
        return st.size() == 0;
        // Check if stack is empty
    }

    int getMin() {
        if(st.empty()){
            return -1;
        }
        stack<int>he;
        int minv = INT_MAX;
        while(!st.empty()){
            int top = st.top();
            minv = min(minv,top);
            he.push(top);
            st.pop();
        }
        while(!he.empty()){
            st.push(he.top());
            he.pop();
        }
        return minv;
        // Finds minimum element of Stack
    }
};