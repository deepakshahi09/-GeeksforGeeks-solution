class Solution {
  public:
    string minWindow(string &s, string &p) {
        // code here
        unordered_map<char,int>mp;
        for(char ch : p){
            mp[ch]++;
        }
        int count = p.size();
        int l = 0;
        int st = 0;
        int minlen = INT_MAX;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]] > 0){
                count--;
            }
            mp[s[i]]--;
            while(count == 0){
                if(i-l+1 < minlen){
                    minlen = i-l+1;
                    st = l;
                }
                mp[s[l]]++;
                if(mp[s[l]] > 0){
                    count++;
                }
                l++;
            }
        }
        if(minlen == INT_MAX){
            return "";
        }
        return s.substr(st,minlen);
        
        
    }
};