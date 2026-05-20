class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        // code here
        if(target == 0){
            return true;
        }
        unordered_map<long long,int>mp;
        for(int i=0;i<arr.size();i++){
            if(arr[i] != 0 && target%arr[i] == 0){
                long long req = target/arr[i];
                
                if(mp.find(req) != mp.end()){
                    return true;
                }
                mp[arr[i]]++;
            }
        }
        return false;
    }
};