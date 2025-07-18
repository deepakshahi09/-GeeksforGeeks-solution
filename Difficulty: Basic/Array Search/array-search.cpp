class Solution {
  public:
    int search(vector<int>& arr, int x) {
        int c = 0;
        for(int n: arr){
            if(n==x){
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