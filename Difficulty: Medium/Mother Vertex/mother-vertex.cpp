class Solution {
	private:
	
	void dfs(int node, vector<int> &visit, vector<int> adj[]) {
		visit[node] = 1;
		for (int i : adj[node]) {
			if (!visit[i]) {
				dfs(i, visit, adj);
			}
		}
	}
	
	public:
	int findMotherVertex(int V, vector<vector<int>> & edges) {
		
		vector<int> adj[V];
		
		for (int i = 0; i < edges.size(); i++) {
			int u = edges[i][0];
			int v = edges[i][1];
			adj[u].push_back(v);
		}
		int mother = 0;
		vector<int>vis(V, 0);
		
		for (int i = 0; i<V; i++) {
			if (!vis[i]) {
				dfs(i, vis, adj);
				mother = i;
				
			}
		}
		io
		// now we will
		fill(begin(vis), end(vis), 0);
		dfs(mother, vis, adj);
		for (int i = 0; i<V; i++) {
			if (!vis[i]) {
				return - 1;
			}
		}
		return mother;
	}
};
