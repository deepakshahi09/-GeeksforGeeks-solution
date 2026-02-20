// User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        vector<bool>visit(leaves+1,false);
        vector<bool>use(leaves+1,false);
        for(int i=0;i<N;i++){
            int jump = frogs[i];
            if(jump > leaves || use[jump]){
                continue;
            }
            else{
                use[jump] = true;
            }
            for(int i=jump;i<=leaves;i+=jump){
                visit[i] = true;
            }
        }
        int c = 0;
        for(int i=1;i<=leaves;i++){
            if(!visit[i]){
                c++;
            }
        }
        return c;
    }
};
