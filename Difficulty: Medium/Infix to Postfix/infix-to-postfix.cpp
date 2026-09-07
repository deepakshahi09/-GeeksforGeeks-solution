class Solution {
    int akt(char ch) {
        if (ch == '^') {
            return 3;
        }
        else if (ch == '/' || ch == '*') {
            return 2;
        }
        else if (ch == '+' || ch == '-') {
            return 1;
        }
        return -1;
    }

public:
    string infixToPostfix(string& s) {
        stack<char> st;
        string ans;

        for (char ch : s) {

            if (isalnum(ch)) {
                ans += ch;
            }

            else if (ch == '(') {
                st.push(ch);
            }

            else if (ch == ')') {
                while (st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }

                if (!st.empty()) {
                    st.pop();
                }
            }

            else {
                while (!st.empty() && st.top() != '(' &&
                       (akt(st.top()) > akt(ch) ||
                       (akt(st.top()) == akt(ch) && ch != '^'))) {

                    ans += st.top();
                    st.pop();
                }

                st.push(ch);
            }
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};