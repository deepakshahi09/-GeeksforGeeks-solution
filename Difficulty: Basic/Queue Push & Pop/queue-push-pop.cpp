class Solution {
  public:
    queue<int> fillQ(const vector<int>& arr) {
        queue<int>q;
        for(int i:arr){
            q.push(i);
        }
        return q;
        // code here
        
    }

    void emptyQ(queue<int>& q) {
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }
        cout<<endl;

        
        // code here
    }
};