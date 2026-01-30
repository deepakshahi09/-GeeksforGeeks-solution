class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        //  code here
        int totalgas = 0;
        int totalcost = 0;
        int currgas = 0;
        int st = 0;
        for(int i=0;i<gas.size();i++){
            totalgas+=gas[i];
            totalcost+=cost[i];
            
            currgas += gas[i] - cost[i];
            
            if(currgas < 0){
                st = i+1;
                currgas = 0;
            }
        }
        if(totalgas >= totalcost){
            return st;
        }
        else{
            return -1;
        }
    }
};