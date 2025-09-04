class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size();
       
        long long res = 1LL * (n + 1) * (n + 2) / 2;
        long long sum = 0;
        for(int i:arr){
            sum+=i;
        }
        return (int)(res-sum);
    }
};