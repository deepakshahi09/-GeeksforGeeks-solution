class Solution {
  public:
    void binSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        int zerocou = 0;
        for(int i : arr){
            if(i==0){
                zerocou++;
            }
        }
        for(int i=0;i<zerocou;i++){
            arr[i] = 0;
        }
        for(int i=zerocou;i<n;i++){
            arr[i] = 1;
        }
    }
};
