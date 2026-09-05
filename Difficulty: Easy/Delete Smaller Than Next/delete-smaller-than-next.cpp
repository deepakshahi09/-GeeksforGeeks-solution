class Solution {
  public:
    vector<int> deleteElement(vector<int>& arr, int k) {
        stack<int>st;
        st.push(arr[0]);
        for(int i=1;i<arr.size();i++){
            while(!st.empty() && arr[i] > st.top() && k>0){
                st.pop();
                k--;
            }
            st.push(arr[i]);
            
        }
        
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};