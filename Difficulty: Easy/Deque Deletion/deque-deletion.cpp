class Solution {
  public:
    void eraseAt(deque<int> &deq, int x) {
        deq.erase(deq.begin()+x);
        
    }

    void eraseInRange(deque<int> &deq, int start, int end) {
        deq.erase(deq.begin()+start,deq.begin()+end);
        
    }

        
    void eraseAll(deque<int> &deq) {
        deq.clear();
        // code here
        
    }
};