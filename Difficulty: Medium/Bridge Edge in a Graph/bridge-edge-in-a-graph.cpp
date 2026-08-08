class Solution {
private:
    void dfs(int node, int parent, vector<int> adj[],
             vector<int>& tin, vector<int>& low,
             vector<int>& vis, int& timer,
             int c, int d, bool& ans) {

        vis[node] = 1;
        tin[node] = low[node] = timer++;

        for(int it : adj[node]) {

            if(it == parent)
                continue;

            if(!vis[it]) {

                dfs(it, node, adj, tin, low, vis,
                    timer, c, d, ans);

                low[node] = min(low[node], low[it]);

                // Bridge condition
                if(low[it] > tin[node]) {

                    if((node == c && it == d) ||
                       (node == d && it == c)) {
                        ans = true;
                    }
                }
            }
            else {
                low[node] = min(low[node], tin[it]);
            }
        }
    }

public:
    bool isBridge(int V, vector<vector<int>> &edges,
                  int c, int d) {

        vector<int> adj[V];

        for(auto it : edges) {
            int u = it[0];
            int v = it[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> tin(V, 0);
        vector<int> low(V, 0);
        vector<int> vis(V, 0);

        int timer = 0;
        bool ans = false;

        for(int i = 0; i < V; i++) {

            if(!vis[i]) {
                dfs(i, -1, adj, tin, low, vis,
                    timer, c, d, ans);
            }
        }

        return ans;
    }
};