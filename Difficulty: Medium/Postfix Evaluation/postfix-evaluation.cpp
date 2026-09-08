class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        stack<int>st;
        int ans = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == "+"){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                st.push(a+b);
            }
            else if(arr[i] == "-"){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                st.push(a-b);
            }
            else if(arr[i] == "*"){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                st.push(a*b);
            }
            else if(arr[i] == "/"){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                st.push(floor((double)a / b));
            }
            else if(arr[i] == "^"){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                st.push((int)pow(a,b));
            }
            else{
                st.push(stoi(arr[i]));
            }
        }
        return st.top();
        
    }
};