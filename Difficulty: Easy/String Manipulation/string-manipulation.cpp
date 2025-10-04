// User function Template for C++
class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        stack<string>st;
        for(string s: arr){
            if(st.empty()){
                st.push(s);
            }
            else if(s == st.top()){
                st.pop();
            }
            else{
                st.push(s);
            }
        }
        return st.size();
        // Your code goes here
    }
};