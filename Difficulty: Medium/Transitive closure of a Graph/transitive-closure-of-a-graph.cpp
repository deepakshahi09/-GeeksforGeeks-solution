//Back-end complete function Template for C++

class Solution {
  public:
    vector<vector<int>> transitiveClosure(int n, vector<vector<int>> graph) {
        for(int i=0;i<n;i++){
            graph[i][i] =1;
        }
        // code here
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                   if (graph[i][k] && graph[k][j])
                        graph[i][j] = 1;
                }
            }
            
        }
        return graph;
    }
};