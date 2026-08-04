class DSU{
    public:
    vector<int>parent,rank;
    
    DSU(int n){
        parent.resize(n+1);
        rank.resize(n+1,0);
        for(int i=0;i<=n;i++){
            parent[i] = i;
        }
    }
    
    int find_p(int v){
        if(parent[v] == v) return v;
        return parent[v] = find_p(parent[v]);
    }
    
    void union_by_rank(int u, int v){
        int pu = find_p(u);
        int pv = find_p(v);
        
        if(pu == pv) return;
        if(rank[pu] > rank[pv]){
            parent[pv] = pu;
        }
        else if(rank[pu] < rank[pv]){
            parent[pu] = pv;
        }
        else{
            parent[pu] = pv;
            rank[pv]++;
        }
    }
    
};

class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        vector<vector<int>>adj;
        DSU ds(V);
        for(auto &it: edges){
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            
            if(u < v){
                adj.push_back({wt,u,v});
            }
        }
        sort(adj.begin(),adj.end());
        int sum = 0;
        for(auto &it : adj){
            int wt = it[0];
            int u = it[1];
            int v = it[2];
            if(ds.find_p(u) != ds.find_p(v)){
                sum+=wt;
                ds.union_by_rank(u,v);
            }
        }
        return sum;
        
    }
};