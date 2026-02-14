/* _push function to insert elements of array to
   stack
*/
class Solution {
    public:
    stack<int> push(vector<int> &arr) {
        stack<int>st;
        for(int i: arr){
            st.push(i);
        }
        return st;
        // return a stack with all elements of arr inserted in it
    }

    /* _pop function to print elements of the stack
       remove as well
    */
    void pop(stack<int> st) {
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        // print top and pop for each element until it becomes empty
    }
};