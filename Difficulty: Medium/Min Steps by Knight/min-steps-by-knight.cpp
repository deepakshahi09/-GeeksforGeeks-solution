class Solution {
  public:
      int minStepToReachTarget(vector<int>& knightPos,
                               vector<int>& targetPos, int n) {

          priority_queue<
              pair<int,pair<int,int>>,
              vector<pair<int,pair<int,int>>>,
              greater<pair<int,pair<int,int>>>
          > pq;

          vector<vector<int>> visit(n, vector<int>(n, 0));

          // GFG positions 1-based hoti hain
          int sr = knightPos[0] - 1;
          int sc = knightPos[1] - 1;

          int tr = targetPos[0] - 1;
          int tc = targetPos[1] - 1;

          pq.push({0, {sr, sc}});
          visit[sr][sc] = 1;

          int delrow[] = {-2,-2,-1,-1,1,1,2,2};
          int delcol[] = {-1,1,-2,2,-2,2,-1,1};

          while(!pq.empty()) {

              int st = pq.top().first;
              int row = pq.top().second.first;
              int col = pq.top().second.second;

              pq.pop();

              if(row == tr && col == tc) {
                  return st;
              }

              for(int i = 0; i < 8; i++) {

                  int nrow = row + delrow[i];
                  int ncol = col + delcol[i];

                  if(nrow >= 0 && nrow < n &&
                     ncol >= 0 && ncol < n &&
                     !visit[nrow][ncol]) {

                      visit[nrow][ncol] = 1;

                      pq.push({st + 1, {nrow, ncol}});
                  }
              }
          }

          return -1;
      }
  };