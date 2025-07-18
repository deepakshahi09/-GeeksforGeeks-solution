class Solution {
  public:
    void bitManipulation(int num, int i) {
        int pos = i -1;
        int get = (num >> pos) & 1;
        int set = num | (1 << pos);
        int clear  = num & ~(1 << pos);
        cout<<get<<" "<<set<<" "<<clear;
        // your code here
        
    }
};