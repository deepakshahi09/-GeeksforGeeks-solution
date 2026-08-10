class Solution {
	private:
	void dfs(int node, vector<int>adj[], stack<int>&st, vector<int>&visit) {
		visit[node] = 1;
		for (int &it : adj[node]) {
			if (!visit[it]) {
				dfs(it, adj, st, visit);
			}
		}
		st.push(node);
		
	}
	public:
	int kosaraju(int V, vector<vector<int>> &edges) {
		vector<int>adj[V];
		for (auto &it: edges) {
			int u = it[0];
			int v = it[1];
			adj[u].push_back(v);
		}
		vector<int>visit(V, 0);
		stack<int>st;
		for (int i = 0; i<V; i++) {
			if (!visit[i]) {
				dfs(i, adj, st, visit);
			}
		}
		
		vector<int>adjT[V];
		for (int i = 0; i<V; i++) {
			for (int v : adj[i]) {
				adjT[v].push_back(i);
			}
		}
		for (int i = 0; i<V; i++) {
			visit[i] = 0;
		}
		int count = 0;
		stack<int>stt;
		while (!st.empty()) {
			int node = st.top();
			st.pop();
			if (!visit[node]) {
				count++;
				dfs(node, adjT,stt, visit);
			}
		}
		return count;
		
	}
};
