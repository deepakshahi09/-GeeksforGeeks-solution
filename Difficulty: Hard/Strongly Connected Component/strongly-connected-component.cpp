class Solution {
	private:
	void dfs1(int node, vector<int>&visit, vector<vector<int>> &adj, stack<int>&st) {
		visit[node] = 1;
		for (auto &it: adj[node]) {
			if (!visit[it]) {
				dfs1(it, visit, adj, st);
			}
		}
		st.push(node);
	}
	
	void dfs2(int node, vector<int>&visit, vector<vector<int>>&adj, vector<int>&com) {
		visit[node] = 1;
		com.push_back(node);
		for (auto &it: adj[node]) {
			if (!visit[it]) {
				dfs2(it, visit, adj, com);
			}
		}
	}
	public:
	vector<vector<int>> tarjans(int V, vector<vector<int>> & adj) {
		vector<int>visit(V, 0);
		stack<int>st;
		
		for (int i = 0; i<V; i++) {
			if (!visit[i]) {
				dfs1(i, visit, adj, st);
			}
		}
		
		vector<vector<int>> adjT(V);
		for (int i = 0; i<V; i++) {
			for (auto &it: adj[i]) {
				adjT[it].push_back(i);
			}
		}
		visit.assign(V, 0);
		vector<vector<int>> ans;
		while (!st.empty()) {
			int node = st.top();
			st.pop();
			
			if (!visit[node]) {
				vector<int>com;
				dfs2(node, visit, adjT, com);
				sort(com.begin(), com.end());
				ans.push_back(com);
				
			}
			
		}
		sort(ans.begin(), ans.end());
		return ans;
		
	}
};
