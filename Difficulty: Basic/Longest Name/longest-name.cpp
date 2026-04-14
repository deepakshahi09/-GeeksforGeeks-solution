
class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        int size = 0;
        string ans = arr[0];
        for(string s : arr){
            if(size > s.size()){
                ans = ans;
            }
            else if(s.size() == size){
                ans = ans;
            }
            else{
                size = s.size();
                ans = s;
            }
        
        }
        return ans;
    }
};
