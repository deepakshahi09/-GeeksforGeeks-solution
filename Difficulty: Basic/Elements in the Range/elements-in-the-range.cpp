class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // code here
       unordered_set<int>st;
       for(int i : arr){
           st.insert(i);
       }
       
       for(int i=start;i<=end;i++){
           if(!st.count(i)){
               return false;
           }
       }
       return true;
    }
};
