class Solution {
  public:
    vector<int> rotation(int n) {
        // Code Here
        deque<int>dq;
        for(int i=n;i>=1;i--){
            dq.push_front(i);
            for(int j=0;j<i;j++){
                int backcard = dq.back();
                dq.pop_back();
                dq.push_front(backcard);
            }
        }
        vector<int>result(dq.begin(),dq.end());
        return result;
    }
};
