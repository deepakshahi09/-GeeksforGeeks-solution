class Solution {
  public:
    vector<int> FactDigit(int N) {
        vector<int>fact(10,1);
        for(int i=2;i<=9;i++){
            fact[i] = fact[i-1] * i;
        }
        
        vector<int>res;
        for(int i=9;i>=1;i--){
            while(N >= fact[i]){
                N-=fact[i];
                res.push_back(i);
            }
        }
        reverse(res.begin(),res.end());
        return res;
        // Code here
        
    }
};