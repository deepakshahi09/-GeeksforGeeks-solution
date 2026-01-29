class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        // code here
        stack<int>st;
        int mx = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                int height = arr[st.top()];
                st.pop();
                int width;
                if(st.empty()){
                    width = i;
                }
                else{
                    width = i-st.top()-1;
                }
                mx = max(mx,height*width);
            }
            st.push(i);
        }
        while(!st.empty()){
            int height = arr[st.top()];
            st.pop();
            int width;
            if(st.empty()){
                width = n;
            }
            else{
                width = n-st.top()-1;
            }
            mx = max(mx,height*width);
            
            
        }
        return mx;
    }
};
