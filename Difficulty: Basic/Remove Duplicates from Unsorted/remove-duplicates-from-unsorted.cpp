class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        
        // code here
        unordered_set<int>st;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(!st.count(arr[i])){
                ans.push_back(arr[i]);
                st.insert(arr[i]);
            }
        }
        return ans;
        
    }
};