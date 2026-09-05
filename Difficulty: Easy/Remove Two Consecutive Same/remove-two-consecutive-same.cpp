class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // code here
        stack<string>st;
        int i = 0;
        while(i < arr.size()){
            if(st.empty()){
                st.push(arr[i]);
            }
            else if(st.top() == arr[i]){
                st.pop();
            }
            else{
                st.push(arr[i]);
            }
           
            i++;
        }
        return st.size();
    }
};