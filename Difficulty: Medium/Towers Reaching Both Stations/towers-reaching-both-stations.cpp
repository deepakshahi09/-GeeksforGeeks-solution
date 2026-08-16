class Solution {
	private:
	void dfs(int row, int col, vector<vector<int>> &visit, vector<vector<int>> &mat) {
		int n = mat.size();
		int m = mat[0].size();
		
		visit[row][col] = 1;
		int delrow[] = {-1, 0, 1, 0};
		int delcol[] = {0, 1, 0, -1};
		
		for (int i = 0; i<4; i++) {
			int nrow = delrow[i] + row;
			int ncol = delcol[i] + col;
			
			if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && !visit[nrow][ncol] && mat[nrow][ncol] >= mat[row][col]) {
				dfs(nrow, ncol, visit, mat);
			}
		}
	}
	public:
	int countCoordinates(vector<vector<int>> & mat) {
		int n = mat.size();
		int m = mat[0].size();
		vector<vector<int>> visitp(n, vector<int>(m, 0));
		vector<vector<int>> visitq(n, vector<int>(m, 0));
		
		// visit top p
		for (int i = 0; i<m; i++) {
			dfs(0, i, visitp, mat);
		}
		// visit bottom q
		for (int i = 0; i<m; i++) {
			dfs(n - 1, i, visitq, mat);
		}
		
		// visit left p;
		for (int i = 0; i<n; i++) {
			dfs(i, 0, visitp, mat);
		}
		// visit right q
		for (int i = 0; i<n; i++) {
			dfs(i,m - 1, visitq, mat);
		}
		int c = 0;
		for (int i = 0; i<n; i++) {
			for (int j = 0; j<m; j++) {
				if (visitp[i][j] && visitq[i][j]) {
					c++;
				}
			}
		}
		return c;
	}
};
