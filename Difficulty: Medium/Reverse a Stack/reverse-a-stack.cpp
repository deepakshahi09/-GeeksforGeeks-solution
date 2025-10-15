class Solution {
  public:
    void reverseStack(stack<int> &st) {
        stack<int>temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        stack<int>temp1;
        while(!temp.empty()){
            temp1.push(temp.top());
            temp.pop();
        }
        while(!temp1.empty()){
            st.push(temp1.top());
            temp1.pop();
        }
        
        // code here
        
    }
};