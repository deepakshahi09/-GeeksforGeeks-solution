class myQueue {

  public:
  stack<int>s1;
  stack<int>s2;
    myQueue() {
        // Initialize your data members
    }

    void enqueue(int x) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        // Implement enqueue operation
    }

    void dequeue() {
        if(!s1.empty()){
            s1.pop();
        }
        // Implement dequeue operation
    }

    int front() {
        if(!s1.empty()){
            return s1.top();
        }
        return -1;
        // Implement front operation
    }

    int size() {
        
            return s1.size();
            
      
        // Implement size operation
    }
};
