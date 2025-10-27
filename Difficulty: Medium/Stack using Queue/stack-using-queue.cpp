class myStack {
    queue<int> q;

  public:

    void push(int x) {
        q.push(x);
        if(!q.empty()){
            int n = q.size();
            for(int i=0;i<n-1;i++){
                q.push(q.front());
                q.pop();
            }
        }
        // Inserts an element x at the top of the stack
    }

    void pop() {
        if(!q.empty()){
            q.pop();
        }
        // Removes an element from the top of the stack
    }

    int top() {
        if(!q.empty()){
            return q.front();
        }
        return -1;
        // Returns the top element of the stack
        // If stack is empty, return -1
    }

    int size() {
        return q.size();
        // Returns the current size of the stack
    }
};
