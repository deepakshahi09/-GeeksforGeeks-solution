// User function Template for C++

class Solution {
  public:
    void Addition(vector<vector<int>>& A, vector<vector<int>>& B) {
        // Code here
        int n = A.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                A[i][j] = A[i][j]+B[i][j];
            }
        }
    }
};