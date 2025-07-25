// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n = val.size();
        vector<pair<double,int>> items;
        for(int i=0;i<n;i++){
            double ratio  = (double)val[i]/wt[i];
            items.push_back({ratio,i});
        }
        
        sort(items.rbegin(),items.rend());                    // FIRST WATCH ON YOUTUBE
        double tValue = 0;
        for(int i=0 ; i < n && capacity > 0 ; i++){
            int index = items[i].second;
            int takeWeight = min (wt[index], capacity);
            
            tValue += val[index]* ((double) takeWeight/wt[index]);
            capacity -=takeWeight;
        }
        return tValue;
   }
};