class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int mx = 1;
        int curr = 1;
        
        for(int i=1;i<arr.size();i++){
            if(arr[i] == arr[i-1]){
                curr++;
            }
            else{
                curr = 1;
            }
            
            mx = max(mx,curr);
        }
        return mx;
    }
};