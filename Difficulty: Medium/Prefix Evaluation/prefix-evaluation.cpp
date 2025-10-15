class Solution {
  public:
    int evaluatePrefix(vector<string>& arr) {
        stack<int>st;
        for(int i=arr.size()-1;i>=0;i--){
            string s = arr[i];
            if(s == "+" || s == "-" || s == "*" || s=="/" || s=="^"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                
                if(s == "+"){
                    st.push(a+b);
                }
                else if(s == "-"){
                    st.push(a-b);
                }
                else if(s == "*"){
                    st.push(a*b);
                }
                else if(s == "/"){
                    st.push(floor((double)a/b));
                }
                else if(s == "^"){
                    st.push(pow(a,b));
                }
            }
            else{
                st.push(stoi(s));
            }
        }
        return st.top();
        // code here
        
    }
};