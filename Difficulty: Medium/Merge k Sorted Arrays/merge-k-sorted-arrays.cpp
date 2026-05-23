class Solution {
  public:
    vector<int>merge(vector<int>&a,vector<int>&b){
        
        int n = a.size();
        int m = b.size();
        vector<int>ans(n+m);
        int k =0;
        int i = 0;
        int j = 0;
        while(i<n && j < m){
            if(a[i]  < b[j]){
                ans[k] = a[i];
                i++;
                k++;
            }
            else{
                ans[k] = b[j];
                j++;
                k++;
            }
        }
        while(i<n){
            ans[k] = a[i];
            i++;
            k++;
        }
        while(j < m){
            ans[k] = b[j];
            k++;
            j++;
        }
        return ans;
    }
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        vector<int>ans = mat[0];
        for(int i=1;i<mat.size();i++){
            ans = merge(ans,mat[i]);
        }
        return ans;
        // Code here
        
    }
};