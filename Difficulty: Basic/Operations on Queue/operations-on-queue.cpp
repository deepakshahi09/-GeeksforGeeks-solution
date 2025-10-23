class myQueue {
    deque<int>dq;
    // define your queue
  public:
    void enqueue(int x) {
        dq.push_back(x);
        // insert x into queue
    }

    void dequeue() {
        if(dq.empty()){
            cout<<"deque is empty";
        }
        else{
            dq.pop_front();
        }
        // remove front element from queue
    }

    int getFront() {
        if(!dq.empty()){
            return dq.front();
        }
        else{
            return -1;
        }
        // return the front element of the queue
    }

    int getRear() {
        if(!dq.empty()){
            return dq.back();
        }
        else{
            return -1;
        }
        // return the rear element of the queue
    }

    bool isEmpty() {
        return dq.empty();
        // check whether queue is empty
    }

    int size() {
        return dq.size();
        // return size of the queue
    }
};