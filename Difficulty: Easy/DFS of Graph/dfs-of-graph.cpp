//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void dfsHelper(int node, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &ans) {
        visited[node] = true;
        ans.push_back(node);
        for (int j = 0; j < adj[node].size(); j++) {
            if (!visited[adj[node][j]]) {
                dfsHelper(adj[node][j], adj, visited, ans);
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& adj) {
        int v = adj.size();
        vector<bool> visited(v, false);
        vector<int> ans;
        dfsHelper(0, adj, visited, ans);
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V;
        cin >> V;
        cin.ignore();
        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < V; i++) {
            string input;
            getline(cin, input);
            int num;
            vector<int> node;
            stringstream ss(input);
            while (ss >> num) {
                node.push_back(num);
            }
            adj[i] = node;
        }

        Solution obj;
        vector<int> ans = obj.dfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends