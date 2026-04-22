class Solution {
  public:
    string secFrequent(string arr[], int n) {
        
        map<string,int> mp;
        
        for(int i = 0; i < n; i++){
            mp[arr[i]]++;
        }
        
        int fm = 0, sm = 0;
        string fans = "", sans = "";
        
        for(auto it : mp){
            
            if(it.second > fm){
                sm = fm;
                sans = fans;
                
                fm = it.second;
                fans = it.first;
            }
            
            else if(it.second > sm && it.second < fm){
                sm = it.second;
                sans = it.first;
            }
        }
        
        return sans;
    }
};