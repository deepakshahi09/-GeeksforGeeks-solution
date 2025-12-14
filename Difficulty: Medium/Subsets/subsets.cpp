class Solution {
  public:
    void printSubset(vector<int>&arr, int index, vector<int>subset, vector<vector<int>>&ans){
        //base case
        if(index == arr.size()){
            ans.push_back(subset);
            return;
        }
        //yes choise include 
        subset.push_back(arr[index]);
        printSubset(arr,index+1,subset,ans);
        subset.pop_back();//backtrack
        printSubset(arr,index+1,subset,ans);// call for no choice
        
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        int index = 0;
        vector<vector<int>>ans;
        vector<int>subset;
        printSubset(arr,index,subset,ans);
        return ans;
        // code here
        
    }
};