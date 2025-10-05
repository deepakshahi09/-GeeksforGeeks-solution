class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char>st;
        for(char ch : s){
            if(ch == '(' || ch == '[' || ch == '{'){
                st.push(ch);
            }
            else {
                if(st.empty()){
                    return false;
                }
                else{
                    char p = st.top();
                    if((ch == ')' && p == '(' ) || (ch == ']' && p == '[') || (ch=='}' && p == '{')){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
};