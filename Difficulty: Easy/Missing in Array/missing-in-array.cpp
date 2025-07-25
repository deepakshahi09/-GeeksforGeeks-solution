class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size()+1;
        long long expt =1LL * n*(n+1)/2;
        long long sum = 0;
        for(int p:arr){
            sum+=p;
        }
        return expt-sum;
    }
};