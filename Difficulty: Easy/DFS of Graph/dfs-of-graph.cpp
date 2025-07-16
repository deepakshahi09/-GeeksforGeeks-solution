class Solution {
public:
    vector<int> dfs(vector<vector<int>>& adj) {
        int n = adj.size();             // Number of nodes
        vector<bool> visited(n, false); // To mark visited nodes
        vector<int> result;             // To store DFS traversal
        stack<int> st;
        
        st.push(0); // Starting from node 0

        while (!st.empty()) {
            int node = st.top();
            st.pop();

            if (!visited[node]) {
                visited[node] = true;
                result.push_back(node);

                // Push neighbors in reverse order for consistent traversal
                for (int i = adj[node].size() - 1; i >= 0; i--) {
                    int neighbor = adj[node][i];
                    if (!visited[neighbor]) {
                        st.push(neighbor);
                    }
                }
            }
        }

        return result;
    }
};
