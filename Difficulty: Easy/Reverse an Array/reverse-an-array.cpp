class Solution {
  public:
    void swap(int &i, int &j){
        int temp = i;
        i = j;
        j  = temp;
    }
    void reverseArray(vector<int> &arr) {
        // code here
        int i = 0;
        int n = arr.size()-1;
        while(i < n){
            swap(arr[i],arr[n]);
            i++;
            n--;
        }
    }
};