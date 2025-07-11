class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int>set;
        for(int i:a){
            set.insert(i);
        }
        for(int n:b){
            set.insert(n);
        }
        vector<int>ans;
        for(int i:set){
            ans.push_back(i);
        }
        return ans;
        
    }
};