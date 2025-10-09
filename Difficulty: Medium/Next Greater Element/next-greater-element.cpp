class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        stack<int>st;
        vector<int>ans(arr.size(),-1);
        for(int i=arr.size()-1;i>=0;i--){
            while(st.size() > 0 && st.top() <= arr[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = st.top();
            }
            st.push(arr[i]);
        }
        return ans;
        // code here
        
    }
};