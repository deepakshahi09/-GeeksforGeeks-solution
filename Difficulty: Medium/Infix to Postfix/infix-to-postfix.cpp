class Solution {
    private:
    int akt(char c){
        if(c == '^'){
            return 3;
        }
        else if(c == '*' || c == '/'){
            return 2;
        }
        else if(c == '+' || c == '-'){
            return 1;
        }
        else{
            return -1;
        }
    }
  public:
    string infixToPostfix(string& s) {
        stack<char>st;
        string ans = "";
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            
            if(isalnum(ch)){
                ans+=ch;
            }
            else if(ch=='('){
                st.push(ch);
            }
            else if(ch == ')'){
                while(st.top() != '('){
                    ans+=st.top();
                    st.pop();
                }
                if(!st.empty()){
                    st.pop();
                }
                
            }
            else{
                while(!st.empty() &&
                      st.top() != '(' &&
                      (akt(st.top()) > akt(ch) ||
                       (akt(st.top()) == akt(ch) && ch != '^'))) {

                    ans += st.top();
                    st.pop();
                }
                st.push(ch);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
        
    }
};




















