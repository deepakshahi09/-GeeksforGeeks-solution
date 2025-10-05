void push(stack<int>& s, int a) {
    s.push(a);
    // Your code goes here
}

bool isFull(stack<int>& s, int n) {
    return (s.size() == n);
    // Your code goes here
}

bool isEmpty(stack<int>& s) {
    return (s.size() == 0);
    // Your code goes here
}

int pop(stack<int>& s) {
    if(s.empty()){
        return -1;
    }
    int x = s.top();
    s.pop();
    return x;
    // Your code goes here
}

int getMin(stack<int>& s) {
    if(s.empty()){
        return -1;
    }
    stack<int>t = s;
    int mn = t.top();
    
    while(!t.empty()){
        mn = min(mn,t.top());
        t.pop();
    }
    return mn;
    // Your code goes here
}