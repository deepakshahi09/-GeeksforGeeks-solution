class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Your Code Here
        int n = arr.size();
        for(int i=0;i<n-2;i++){
            int curr = target - arr[i];
            unordered_set<int>seen;
            for(int j=i+1;j<n;j++){
                int req = curr - arr[j];
                if(seen.find(req) != seen.end()){
                    return true;
                }
                seen.insert(arr[j]);
            }
        }
        return false;
    }
};