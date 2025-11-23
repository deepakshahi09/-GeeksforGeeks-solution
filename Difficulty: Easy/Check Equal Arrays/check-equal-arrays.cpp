class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        if(a.size() != b.size()){
            return false;
        }
        unordered_map<int, int>map;
        for(int i: a){
            map[i]++;
        }
        
        for(int i : b){
            if(map.find(i) == map.end() || map[i] == 0){
                return false;
            }
        map[i]--;
            
        }
        return true;
    }
};