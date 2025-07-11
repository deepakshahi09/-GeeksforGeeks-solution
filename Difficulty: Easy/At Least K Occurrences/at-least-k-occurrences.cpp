class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
        map<int, int>m;
        for(int i:arr){
            m[i]++;
            if(m[i]==k){
                return i;
            }
        }
        return -1;
        // write code
    }
};