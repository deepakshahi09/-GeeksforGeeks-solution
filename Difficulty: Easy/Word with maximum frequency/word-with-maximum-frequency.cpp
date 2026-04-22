class Solution {
  public:
    string maximumFrequency(string& s) {
        vector<string>word;
        unordered_map<string, int>mp;
        string temp;
        for(char ch : s){
            if(ch == ' '){
                word.push_back(temp);
                mp[temp]++;
                temp = "";
            }
            else{
                temp+=ch;
            }
        }
        word.push_back(temp);
        mp[temp]++;
        
        int mx = 0;
        string ans = "";
        for(string w : word){
            if(mp[w] > mx){
                mx = mp[w];
                ans = w;
            }
        }
        return ans+" "+to_string(mx);
        
        // Your code foes here.
    }
};