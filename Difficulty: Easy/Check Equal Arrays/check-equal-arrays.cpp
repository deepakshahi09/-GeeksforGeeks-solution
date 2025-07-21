// User function template for C++

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool checkEqual(vector<int>& a, vector<int>& b) {
        if(a.size() != b.size()){
            return false;
        }
        unordered_map<int,int>freq;
        for(int val: a){
            freq[val]++;
        }
        for(int val : b){
            if(freq[val] == 0){
                return false;
            }
            else{
                freq[val]--;
            }
        }
        return true;
        // code here
        
    }
};