class Solution {
  public:
    string equilibrium(vector<int> &arr) {
        int totalsum = 0;
        for(int i : arr){
            totalsum+=i;
        }
        int leftsum = 0;
        for(int i : arr){
            int rightsum = totalsum - i - leftsum;
            if(leftsum == rightsum){
                return "true";
            }
            leftsum+=i;
        }
        return "false";
    }
};