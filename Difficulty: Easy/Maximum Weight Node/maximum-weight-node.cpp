// User function Template for C++
class Solution {
  public:
    int maxWeightCell(vector<int> &exits) {
        // code here
        int n = exits.size();
        vector<long long>weight(n,0);
        for(int i=0;i<n;i++){
            if(exits[i] != -1){
                weight[exits[i]] +=i;
            }
        }
        long long maxw = -1;
        int ans = -1;
        for(int i=0;i<n;i++){
            if(weight[i] >= maxw){
                maxw = weight[i];
                ans = i;
            }
        }
        return ans;
    }
};