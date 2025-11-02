class Solution {
  public:
    vector<long long> jugglerSequence(long long n) {
        vector<long long>ans;
        ans.push_back(n);
        while(n != 1){
            if(n % 2 == 0){
                n = floor(pow(n,0.5));
            }
            else{
                n = floor(pow(n,1.5));
            }
            ans.push_back(n);
        }
        return ans;
        // code here
        
    }
};