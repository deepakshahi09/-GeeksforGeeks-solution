#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removePair(string s) {
        stack<char> st;
        for (char c : s) {
            if (!st.empty() && st.top() == c) {
                st.pop();   
            } else {
                st.push(c);
            }
        }

        string sy = "";
        while (!st.empty()) {
            sy = st.top()+sy;
            st.pop();
        }

        
        return sy.empty() ? "-1" : sy; 
    }
};
