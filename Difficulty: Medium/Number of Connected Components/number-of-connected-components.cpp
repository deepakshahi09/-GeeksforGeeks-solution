class DSU {
public:
    vector<int> parent, rank;

    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);

        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int findParent(int node) {
        if (parent[node] == node)
            return node;

        return parent[node] = findParent(parent[node]);
    }

    void Union(int u, int v) {
        int pu = findParent(u);
        int pv = findParent(v);

        if (pu == pv)
            return;

        if (rank[pu] < rank[pv]) {
            parent[pu] = pv;
        }
        else if (rank[pv] < rank[pu]) {
            parent[pv] = pu;
        }
        else {
            parent[pv] = pu;
            rank[pu]++;
        }
    }
};

class Solution {
public:
    int countConnected(int V, vector<vector<int>>& edges) {

        DSU dsu(V);

        for (auto &it : edges) {
            dsu.Union(it[0], it[1]);
        }

        int cnt = 0;
        for (int i = 0; i < V; i++) {
            if (dsu.findParent(i) == i)
                cnt++;
        }

        return cnt;
    }
};