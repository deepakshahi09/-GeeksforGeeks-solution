// User function Template for C++

// Function to push all the elements into the stack.
stack<int> push(vector<int>& arr) {
    stack<int>st;
    for(int i=0;i<arr.size();i++){
        if(st.empty()){
            st.push(arr[i]);
        }
        else{
            st.push(min(arr[i],st.top()));
        }
    }
    return st;
    // your code here
    
}

// Function to print minimum value in stack each time while popping.
void getMinAtPop(stack<int> s) {
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    // your code here
}