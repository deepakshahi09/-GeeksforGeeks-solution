class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int lar = arr[0];
        for(int i : arr){
            lar = max(lar,i);
        }
        return lar;
    }
};
