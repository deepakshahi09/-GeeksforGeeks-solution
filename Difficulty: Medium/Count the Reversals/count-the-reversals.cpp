class Solution {
  public:
    int countMinReversals(string s) {
        stack<char> st;
        int l = s.length();
        if (l % 2 != 0)
            return -1;

        for (char ch : s) {
            if (ch == '}' && !st.empty() && st.top() == '{')
                st.pop();
            else
                st.push(ch);
        }

        int len = st.size();
        int cl = 0;
        while (!st.empty()) {
            if (st.top() == '}')
                cl++;
            st.pop();
        }

        return (cl + 1) / 2 + ((len - cl) + 1) / 2;
    }
};
