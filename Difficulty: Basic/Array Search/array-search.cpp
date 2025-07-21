class Solution {
  public:
    int search(vector<int>& arr, int x) {
        int c = 0;
        for(int i : arr){
            if(i == x){
                return c;
            }
            else{
                c++;
            }
        }
        return -1;
        // code here
        
    }
};