class Solution {
public:
    void bfs(int row, int col,vector<vector<int>>& visit,vector<vector<char>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        visit[row][col] = 1;

        queue<pair<int,int>> q;
        q.push({row, col});

        while(!q.empty()) {

            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i = -1; i <= 1; i++) {
                for(int j = -1; j <= 1; j++) {

                    int nrow = row + i;
                    int ncol = col + j;

                    if(nrow >= 0 && nrow < n &&
                       ncol >= 0 && ncol < m &&
                       grid[nrow][ncol] == 'L' &&
                       !visit[nrow][ncol]) {

                        visit[nrow][ncol] = 1;
                        q.push({nrow, ncol});
                    }
                }
            }
        }
    }

    int countIslands(vector<vector<char>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> visit(n, vector<int>(m, 0));

        int cnt = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {

                if(!visit[i][j] && grid[i][j] == 'L') {
                    cnt++;
                    bfs(i, j, visit, grid);
                }
            }
        }

        return cnt;
    }
};