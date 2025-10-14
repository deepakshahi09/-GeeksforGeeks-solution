class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        //  code here
        stack<int>st;
        vector<int>ans;
        for(int i:arr){
            while(!st.empty() && st.top() <= i){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
            
            st.push(i);
            
        }
        return ans;
    }
};