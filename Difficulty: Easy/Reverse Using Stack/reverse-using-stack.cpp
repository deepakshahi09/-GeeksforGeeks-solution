class Solution {
  public:
    string reverse(const string& S) {
        stack<char>st;
        for(char ch: S){
            st.push(ch);
        }
        string s = "";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        return s;
        // code here
        
    }
};