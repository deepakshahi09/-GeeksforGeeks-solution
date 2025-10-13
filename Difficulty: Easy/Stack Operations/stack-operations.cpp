#include <stack>
using namespace std;

class myStack {
private:
    stack<int> st;
public:
    void push(int x) { st.push(x); }
    void pop() { if(!st.empty()) st.pop(); }
    int peek() { return st.empty() ? -1 : st.top(); }
    bool isEmpty() { return st.empty(); }
    int getSize() { return st.size(); }
};
