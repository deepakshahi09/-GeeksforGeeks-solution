// User function Template for C++

// User function Template for C++

queue<int> _push(vector<int> &arr) {
    queue<int>q;
    for(int i: arr){
        q.push(i);
    }
    return q;
    
    // return a queue with all elements of arr inserted in it
}

void _pop(queue<int> &q) {
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    // print front and dequeue for each element until it becomes empty
}