// User function Template for C++

class Solution {
  public:

    // Function to push an element in queue.
    void enqueue(queue<int> &q, int x) {
        q.push(x);
        // Your code here
        
    }

    // Function to remove front element from queue.
    void dequeue(queue<int> &q) {
        if(!q.empty()){
            q.pop();
        }
        
        // Your code here
    }

    // Function to find the front element of queue.
        
    int front(queue<int> &q) {
        if(!q.empty()){
            return q.front();
        }
        return -1;
        // Your code here
    }

        
    // Function to find an element in the queue.
    bool find(queue<int> q, int y) {
        while(!q.empty()){
            if(q.front() == y){
                return true;
            }
            q.pop();
        }
        return false;
        // Your code here
    }
};