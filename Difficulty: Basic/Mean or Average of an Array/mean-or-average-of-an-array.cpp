class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int sum = 0;
        for(int i : arr){
            sum+=i;
        }
        int size = arr.size();
        return sum/size;
    }
};