class Solution {
  public:
    vector<int> findMean(vector<int> &arr, vector<vector<int>> &q) {
        int n = arr.size();
        vector<int>ans;
        vector<int>prefix(n);
        prefix[0] = arr[0];
        for(int i = 1;i<n;i++){
            prefix[i] = prefix[i-1] + arr[i];
        }
        int sum = 0;
        for(int i=0;i<q.size();i++){
            int l = q[i][0];
            int r = q[i][1];
            
            if(l == 0){
                sum = prefix[r];
            }
            sum = prefix[r] - prefix[l-1];
            
            int len = r-l+1;
            ans.push_back(sum/len);
        }
        return ans;
        // code here
        
    }
};