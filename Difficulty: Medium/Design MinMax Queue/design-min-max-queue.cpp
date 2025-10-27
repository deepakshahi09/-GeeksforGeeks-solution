class SpecialQueue {
    deque<int>dq;
    deque<int>mindq;
    deque<int>mxdq;
  public:

    void enqueue(int x) {
        dq.push_back(x);
        
        //increasing order of minqueue
        while(!mindq.empty() && mindq.back() > x){
            mindq.pop_back();
        }
        mindq.push_back(x);
        
        //decreading order of mxdq
        while(!mxdq.empty() && mxdq.back() < x){
            mxdq.pop_back();
        }
        mxdq.push_back(x);
    }

    void dequeue() {
        if(dq.empty()){
            return;
        }
        int topval = dq.front();
        dq.pop_front();
        
        if(!mindq.empty() && mindq.front() == topval){
            mindq.pop_front();
        }
        if(!mxdq.empty() && mxdq.front() == topval){
            mxdq.pop_front();
        }
        
        
        // Remove element from the queue
    }

    int getFront() {
        if(dq.empty()){
            return -1;
        }
        return dq.front();
        // Get front element
    }

    int getMin() {
        if(mindq.empty()){
            return -1;
        }
        return mindq.front();
        // Get minimum element
    }

    int getMax() {
        if(mxdq.empty()){
            return -1;
        }
        return mxdq.front();
        // Get maximum element
    }
};