class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        if(a.size() != b.size()){
            return false;
        }
        unordered_map<int, int>set;
        for(int i : a){
            set[i]++;
        }
        for(int i: b){
            if(set.find(i) == set.end() || set[i]==0){
                return false;
            }
            set[i]--;
        }
        return true;
        // code here
        
    }
};