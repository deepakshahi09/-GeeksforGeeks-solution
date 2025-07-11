class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        set<int>s;
        for(int i:arr){
            s.insert(i);
        }
        int l = 1;
        int mx = 1;
       if(s.empty()){
           return 0;
       }
        auto pre = s.begin();
        auto it = next(s.begin());
        while(it != s.end()){
            if(*it == *pre+1){
                l+=1;
            }
            else{
                l=1;
            }
            mx = max(l,mx);
            pre = it;
            it++;
        }
        return mx;
    }
};