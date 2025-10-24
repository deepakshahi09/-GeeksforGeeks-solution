class Solution {
  public:
    void enqueue(queue<int> &q, int k) {
        q.push(k);
        // code here
        
    }

    int findFrequency(queue<int> &q, int k) {
        
        int count = 0;
        int si = q.size();
        for(int i=0;i<si;i++){
            int front = q.front();
            q.pop();
            if(front == k){
                count++;
            }
            q.push(front);
        }
        return count;
        //  code here
    }
};