// User function Template for C++

// Complete this function
class Solution {
  public:
    void reverseArray(vector<int>& arr) {
        stack<int>st;
        for(int i:arr){
            st.push(i);
        }
        int i = 0;
        while(!st.empty()){
            int t = st.top();
            arr[i] = t;
            i++;
            st.pop();
        }

        // Your code here
        

        // Reverse the array
    }
};