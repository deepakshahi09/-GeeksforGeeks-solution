class Solution {
  public:
    int minThrows(int n, vector<int>& lad, vector<int>& sn) {
        int N = n*n;
        vector<int>dist(N+1,-1);
        vector<int>move(N+1,-1);
        for(int i=0;i<lad.size();i++){
            move[lad[i]] = lad[i+1];
            i++;
        }
        for(int i=0;i<sn.size();i++){
            move[sn[i]] = sn[i+1];
            i++;
        }
        queue<int>q;
        q.push(1);
        dist[1] = 0;
        while(!q.empty()){
            int cell = q.front();
            q.pop();
            if(cell == N) return dist[N];
            if(cell > N) break;
            for(int i=1;i<=6;i++){
                int ncell = i+cell;
                if(ncell > N) break;
                if(move[ncell] != -1){
                    ncell = move[ncell];
                }
                if(dist[ncell] == -1){
                    dist[ncell] = dist[cell]+1;
                    q.push(ncell);
                }
            }
        }
        return -1;
    }
};