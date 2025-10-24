class Solution {
  public:
    void eraseAt(deque<int> &deq, int x) {
        if(x>=0 && x< deq.size()){
            deq.erase(deq.begin()+x);
        }
        // code here
        
    }

    void eraseInRange(deque<int> &deq, int start, int end) {
        if(start == end){
            return;
        }
        if(start >=0 && end < deq.size() && start < end){
            deq.erase(deq.begin()+start,deq.begin()+end);
        }
        // code here
    }

        
    void eraseAll(deque<int> &deq) {
        // while(!deq.empty()){
        //     dep.pop();
        // }
        
        deq.clear();
        // code here
    }
};