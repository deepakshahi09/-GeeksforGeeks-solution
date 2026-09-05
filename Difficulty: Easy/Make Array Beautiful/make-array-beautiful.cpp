// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>st;
        for(int i:arr){
            if(st.empty()){
                st.push(i);
            }
            else if((st.top() >= 0 && i < 0) || (st.top() < 0 && i>=0)){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};