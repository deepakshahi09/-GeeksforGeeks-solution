class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int total = 0;
        for(int i : arr){
            total+=i;
        }
        
        if(total % 2 == 1) return false;
        
        int target = total/2;
        int sum = 0;
        for(int j : arr){
            sum+=j;
            if(total - sum == target) return true;
        }
        return false;
    }
};
