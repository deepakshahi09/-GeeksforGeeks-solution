
class Solution {
  public:
    vector<vector<int>> binTreeSortedLevels(int arr[], int n) {
        // Your code here
        vector<vector<int>>ans;
        int st = 0;
        int level = 0;
        while(st < n){
            int end = min(n,st+(1 << level));
            level++;
            vector<int>lev;
            for(int i=st;i<end;i++){
                lev.push_back(arr[i]);
            }
            sort(lev.begin(),lev.end());
            ans.push_back(lev);
            st = end;
            
        }
        return ans;
        
    }
};