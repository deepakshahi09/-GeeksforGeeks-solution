class Solution {
  public:
    int minSteps(vector<int>& arr, int start, int end) {
        int mode = 1000;
        if(start == end) return 0;
        vector<int>dist(1000,1e9);
        dist[start] = 0;
        queue<pair<int,int>>q;
        q.push({start,0});
        
        while(!q.empty()){
            int nu = q.front().first;
            int step = q.front().second;
            q.pop();
            
            for(auto it : arr){
                int num = (it * nu)%mode;
                if(num == end) return step+1;
                if(step+1 < dist[num]){
                    dist[num] = step+1;
                    q.push({num,step+1});
                }
                
            }
            
        }
        return -1;
        
    }
};