class Solution {
  public:
    string removePair(string &s) {
        // code here
        stack<char>st;
        for(char ch : s){
            if(!st.empty() && st.top() == ch){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        if(st.empty()){
            return "Empty String";
        }
        string ans;
        while(!st.empty()){
            ans = st.top()+ans;
            st.pop();
        }
        return ans;
    }
};