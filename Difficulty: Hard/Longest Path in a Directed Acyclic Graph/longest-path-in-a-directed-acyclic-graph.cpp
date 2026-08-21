class Solution {
	public:
	vector<int> maxDistance(int V, int src, vector<vector<int>> &edges) {
		vector<vector<pair<int, int>> >adj(V);
		vector<int>indegree(V, 0);
		for (auto &it: edges) {
			int u = it[0];
			int v = it[1];
			int wt = it[2];
			
			adj[u].push_back({v, wt});
			indegree[v]++;
		}
		
		queue<int>q;
		for (int i = 0; i<V; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}
		
		vector<int>topo;
		while (!q.empty()) {
			int top = q.front();
			q.pop();
			topo.push_back(top);
			for (auto &it: adj[top]) {
				int node = it.first;
				indegree[node]--;
				if (indegree[node] == 0) {
					q.push(node);
				}
			}
		}
		
		vector<int>dist(V, INT_MIN);
		dist[src] = 0;
		for (auto &node: topo) {
			
			if (dist[node] == INT_MIN) {
				continue;
			}
			for (auto &i:adj[node]) {
				int v = i.first;
				int wt = i.second;
				
				dist[v] = max(dist[v], dist[node]+wt);
			}
			
		}
		return dist;
	}
	
};
