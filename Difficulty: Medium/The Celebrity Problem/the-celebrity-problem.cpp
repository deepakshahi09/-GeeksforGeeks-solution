class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        for(int i=0;i<n;i++){
            bool knowsSomeone  = false;
            for(int j=0;j<n;j++){
                if(i != j && mat[i][j] == 1){
                    knowsSomeone  = true;
                    break;
                    
                }
            }
            bool hekSomeone  = true;
            for(int j=0;j<n;j++){
                if(i != j && mat[j][i] == 0){
                    hekSomeone = false;
                    break;
                }
            }
            if(!knowsSomeone && hekSomeone){
                return i;
            }
            
            
        }
        return -1;
        
    }
};