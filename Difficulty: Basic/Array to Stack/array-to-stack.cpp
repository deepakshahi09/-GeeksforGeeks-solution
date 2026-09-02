class Solution {
  public:

    // Push elements of an array into a stack.
    stack<int> push(vector<int> &arr) {
        stack<int>st;
        for(int i : arr){
            st.push(i);
        }
        return st;
        
        
    }

    // Print elements of a stack and pop them.
    void printAndPop(stack<int> s) {
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
        
    }
};