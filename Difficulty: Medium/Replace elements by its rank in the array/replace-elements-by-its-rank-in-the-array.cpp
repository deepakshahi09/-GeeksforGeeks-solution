// User function Template for C++

class Solution {
  public:

    vector<int> replaceWithRank(vector<int> &arr, int N) {
        vector<int>temp = arr;
        sort(temp.begin(),temp.end());
        
        map<int,int>mp;
        
        int count = 1;
        for(int i=0;i<N;i++){
            if(mp[temp[i]] == 0){
                mp[temp[i]] = count;
                count++;
            }
        }
        vector<int>ans;
        for(int i=0;i<N;i++){
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};
