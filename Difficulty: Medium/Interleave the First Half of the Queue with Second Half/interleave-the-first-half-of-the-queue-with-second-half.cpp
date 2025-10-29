class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        int n = q.size();
        if(n % 2 != 0){
            return;
        }
        queue<int>firsthalf;
        for(int i=0;i<n/2;i++){
            firsthalf.push(q.front());
            q.pop();
        }
        
        while(!firsthalf.empty()){
            q.push(firsthalf.front());
            firsthalf.pop();
            q.push(q.front());
            q.pop();
        }
    }
};