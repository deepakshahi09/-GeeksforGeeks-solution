class DSU{
    public:
    vector<int>parent,size;
    DSU(int n){
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i=0;i<=n;i++){
            parent[i] = i;
        }
    }
    
    int find_p(int u){
        if(parent[u] == u) return u;
        return parent[u] = find_p(parent[u]);
    }
    
    void UnionBySize(int u, int v){
        int pu = find_p(u);
        int pv = find_p(v);
        
        if(pu == pv) return;
        
        if(size[pu] > size[pv]){
            parent[pv] = pu;
            size[pu]+=size[pv];
        }
        else{
            parent[pu] = pv;
            size[pv]+=size[pu];
        }
    }
};

class Solution {
  public:
    int maxRemove(vector<vector<int>>& stones) {
        int maxrow = 0;
        int maxcol = 0;
        for(auto &i : stones){
            maxrow = max(maxrow,i[0]);
            maxcol = max(maxcol,i[1]);
        }
        
        DSU ds(maxrow+maxcol+2);
        unordered_set<int>st;
        for(auto &it: stones){
            int rownode = it[0];
            int colnode = it[1]+maxrow+1;
            
            ds.UnionBySize(rownode,colnode);
            
            st.insert(rownode);
            st.insert(colnode);
        }
        int com = 0;
        for(auto it : st){
            if(ds.find_p(it) == it){
                com++;
            }
        }
        return stones.size() - com;
        
    }
};