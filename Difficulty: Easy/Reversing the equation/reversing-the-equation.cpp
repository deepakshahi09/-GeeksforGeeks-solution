class Solution {
public:
    string reverseEqn(string s) {
        stack<string> st;
        int n = s.size();
        for (int i = 0; i < n; ) {
            if (isdigit(s[i])) {
                string num = "";
                while (i < n && isdigit(s[i])) {
                    num += s[i];
                    i++;
                }
                st.push(num);
            } else {
                string op = "";
                op += s[i];
                st.push(op);
                i++;
            }
        }

        string res = "";
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }

        return res;
    }
};
