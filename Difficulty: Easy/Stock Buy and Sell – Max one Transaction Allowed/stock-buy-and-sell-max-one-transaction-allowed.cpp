class Solution {
  public:
    int maxProfit(vector<int> &p) {
        
        int curr = 0;
        int mx = 0;
        int by = INT_MAX;
        
        for(int i=0;i<p.size();i++){
            if(by > p[i]){
                by = p[i];
            }
            else{
                mx = max(mx,p[i]-by);
            }
        }
        return mx;
        
    }
};
