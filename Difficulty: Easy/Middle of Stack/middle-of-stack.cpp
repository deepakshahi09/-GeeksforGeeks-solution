class Solution {
  public:
    int stackMiddle(stack<int>& st) {
        // code here
        int n = st.size() / 2;
        while(n > 0){
            st.pop();
            n--;
        }
        return st.top();
    }
};