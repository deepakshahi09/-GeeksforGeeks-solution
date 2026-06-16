class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image,
                                  int sr, int sc,
                                  int newColor) {

        vector<vector<int>> ans = image;

        int originalColor = image[sr][sc];

        if (originalColor == newColor)
            return image;

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        dfs(image, ans, delrow, delcol,
            sr, sc, newColor, originalColor);

        return ans;
    }

private:
    void dfs(vector<vector<int>>& image,
             vector<vector<int>>& ans,
             int delrow[],
             int delcol[],
             int row,
             int col,
             int newColor,
             int originalColor) {

        int n = image.size();
        int m = image[0].size();

        ans[row][col] = newColor;

        for (int i = 0; i < 4; i++) {
            int newrow = row + delrow[i];
            int newcol = col + delcol[i];

            if (newrow >= 0 && newrow < n &&
                newcol >= 0 && newcol < m &&
                image[newrow][newcol] == originalColor &&
                ans[newrow][newcol] != newColor) {

                dfs(image, ans, delrow, delcol,
                    newrow, newcol,
                    newColor, originalColor);
            }
        }
    }
};