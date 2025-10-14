

class Solution {
  public:
    int SaveGotham(vector<int>& arr) {
        stack<int>st;
        long long sum = 0;
        long long mod = 1000000007;
        int n = arr.size();
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top() <= arr[i]){
                st.pop();
            }
            if(!st.empty()){
                sum = (sum + st.top()) % mod;
            }
            st.push(arr[i]);
        }
        return int(sum % mod);
        
        // Your code
    }
};