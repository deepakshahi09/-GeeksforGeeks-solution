class Solution {
  public:

    // Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[], int n) {
        map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        string ans = "";
        int maxi = 0;
        for(auto it : mp){
            if(it.second > maxi){
                maxi = it.second;
                ans = it.first;
            }
        }
        return {ans,to_string(maxi)};
        // Your code here
        
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
    }
};