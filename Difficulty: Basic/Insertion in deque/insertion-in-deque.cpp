class Solution {
  public:
    deque<int> dqInsertion(vector<int>& arr) {
        // code here
        deque<int>dq;
        for(int n:arr){
            dq.push_back(n);
        }
        return dq;
    }
};