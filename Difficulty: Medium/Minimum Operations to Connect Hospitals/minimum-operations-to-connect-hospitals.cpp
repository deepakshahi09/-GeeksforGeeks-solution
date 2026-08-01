class Solution {
    class Disjoint{
        public:
        vector<int>parent,rank;
        Disjoint(int n){
            parent.resize(n+1);
            rank.resize(n+1,0);
            for(int i=0;i<=n;i++){
                parent[i] = i;
            }
        }
        
        int find(int node){
            if(node == parent[node]) return node;
            return parent[node] = find(parent[node]);
        }
        void unionbyrank(int u, int v){
            int pu = find(u);
            int pv = find(v);
            
            if(pu==pv)  return;
            if(rank[pu] < rank[pv]){
               parent[pu] = pv; 
            }
            else if(rank[pv] < rank[pu]){
                parent[pv] = pu;
            }
            else{
                parent[pu] = pv;
                rank[pv]++;
            }
        }
        
        
    };
  public:
    
    int minConnect(int V, vector<vector<int>>& edges) {
        Disjoint ds(V);
        int extra = 0;
        for(auto &it : edges){
            int u = it[0];
            int v = it[1];
            if(ds.find(u) == ds.find(v)){
                extra++;
            }
            else{
                ds.unionbyrank(u,v);
            }
            
        }
        int cnt = 0;
        for(int i=0;i<V;i++){
            if(ds.find(i) == i){
                cnt++;
            }
        }
        int ans = cnt-1;
        if(extra >= ans) return ans;
        return -1;
        
    }
};
