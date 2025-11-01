class Solution {
  public:
  #define MOD 1000000007 
    vector<int> Series(int n) {
        vector<int>ans;
       ans.push_back(0);
       if(n == 0){
           return ans;
       }
       ans.push_back(1);
       
       for(int i = 2;i<=n;i++){
           long long next = (1LL * ans[i-1] + ans[i-2])%MOD;
           ans.push_back((int)next);
       }
       return ans;
        
        // Code here
        
    }
};