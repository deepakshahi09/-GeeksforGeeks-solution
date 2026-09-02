class myStack {
  private:
    stack<int>st;
  public:
    void push(int x) {
        st.push(x);
        // insert x into stack
    }

    void pop() {
        st.pop();
        // remove top ele from stack
    }

    int peek() {
        return st.top();
        // return top of stack
    }

    int getSize() {
        return st.size();
        // return current size of stack
    }

    bool isEmpty() {
         return st.size() == 0;
        // check whether stack is empty
    }
};