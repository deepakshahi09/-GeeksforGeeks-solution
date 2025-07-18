class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        // code here
        int n = arr.size();
        stack<int>st;
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top() >= arr[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = st.top();
            }
            st.push(arr[i]);
        }
        return ans;
        
    }
};