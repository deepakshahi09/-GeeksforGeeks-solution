// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int mn = INT_MAX;
        int mx = INT_MIN;
        
        for(int i: arr){
            mn = min(i,mn);
            mx = max(i,mx);
        }
        return {mn,mx};
    }
};