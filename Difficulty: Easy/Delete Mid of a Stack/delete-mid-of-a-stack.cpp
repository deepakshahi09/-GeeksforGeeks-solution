class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        stack<int>st;
        while(!s.empty()){
            st.push(s.top());
            s.pop();
        }
        int n = st.size();
        int mid = (n + 1) / 2 - 1;
        for(int i=0;i<n;i++){
            if(i != mid){
                s.push(st.top());
                
            }
            st.pop();
        }
        
        // code here..
    }
};