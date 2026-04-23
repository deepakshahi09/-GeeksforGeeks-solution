class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int c = 1;
        int mx = arr[0];
        for(int i = 1;i<arr.size();i++){
            if(mx <= arr[i]){
                c++;
                mx = arr[i];
            }
        }
        return c;
    }
};