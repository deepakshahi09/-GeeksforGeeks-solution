// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int n: arr){
            mx = max(mx,n);
            mn = min(mn,n);
        }
        return {mn,mx};
    }
};