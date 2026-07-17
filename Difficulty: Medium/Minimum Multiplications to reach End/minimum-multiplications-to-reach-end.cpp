class Solution {
  public:
    int minSteps(vector<int>& arr, int start, int end) {
        int mode = 1000;
        if(start == end){
            return 0;
        }
        queue<pair<int,int>>q;
        vector<int>dist(1000,1e9);
        dist[start] = 0;
        q.push({start,0});
        while(!q.empty()){
            int step = q.front().second;
            int node = q.front().first;
            q.pop();
            for(auto it : arr){
                int num = (it * node)%mode;
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