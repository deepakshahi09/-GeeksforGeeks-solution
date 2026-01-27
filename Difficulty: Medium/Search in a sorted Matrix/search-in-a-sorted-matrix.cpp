class Solution {
public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {

        int n = mat.size();        // number of rows
        int m = mat[0].size();     // number of columns

        int i = 0, j = m - 1;      // start from top-right corner

        while (i < n && j >= 0) {

            if (mat[i][j] == x)
                return true;       // element found

            else if (mat[i][j] > x)
                j--;               // move left

            else
                i++;               // move down
        }

        return false;              // element not found
    }
};
