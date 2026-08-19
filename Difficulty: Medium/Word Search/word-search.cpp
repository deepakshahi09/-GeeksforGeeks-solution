class Solution {
  private:
      bool dfs(int row, int col,
               vector<vector<char>> &mat,
               vector<vector<int>> &visit,
               int idx,
               string &word) {
          int n = mat.size();
          int m = mat[0].size();

          // Boundary
          if(row < 0 || col < 0 || row >= n || col >= m) {
              return false;
          }

          // Character not match
          if(mat[row][col] != word[idx]) {
              return false;
          }

          // Already visited
          if(visit[row][col]) {
              return false;
          }

          // Last character mil gaya
          if(idx == word.size() - 1) {
              return true;
          }

          // Visit
          visit[row][col] = 1;

          int delrow[] = {-1, 0, 1, 0};
          int delcol[] = {0, 1, 0, -1};

          for(int i = 0; i < 4; i++) {

              int nrow = row + delrow[i];
              int ncol = col + delcol[i];

              if(dfs(nrow, ncol, mat, visit, idx + 1, word)) {
                  return true;
              }
          }

          // Backtracking
          visit[row][col] = 0;

          return false;
      }

  public:

      bool isWordExist(vector<vector<char>> &mat, string &word) {

          int n = mat.size();
          int m = mat[0].size();

          vector<vector<int>> visit(n, vector<int>(m, 0));

          for(int i = 0; i < n; i++) {
              for(int j = 0; j < m; j++) {

                  // First character match
                  if(mat[i][j] == word[0]) {

                      if(dfs(i, j, mat, visit, 0, word)) {
                          return true;
                      }
                  }
              }
          }

          return false;
      }
  };