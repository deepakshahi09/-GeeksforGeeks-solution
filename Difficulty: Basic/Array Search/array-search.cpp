class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int p = 0;
        for(int i: arr){
            if(i==x){
                return p;
            }
            else{
                p++;
            }
        }
        return -1;
        
    }
};