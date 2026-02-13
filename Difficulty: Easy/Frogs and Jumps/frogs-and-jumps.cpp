// User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        vector<bool>visit(leaves+1,false);
        vector<bool>usejump(leaves+1,false);
        for(int i = 0;i<N;i++){
            int jump = frogs[i];
            
            if(jump > leaves || usejump[jump]){
                continue;
            }
            else{
                usejump[jump] = true;
            }
            
            for(int j = jump;j<=leaves; j+=jump){
                visit[j] = true;
            }
        }
        int count = 0;
        for(int i=1;i<=leaves;i++){
            if(!visit[i]){
                count++;
            }
        }
        return count;
        
    }
};
