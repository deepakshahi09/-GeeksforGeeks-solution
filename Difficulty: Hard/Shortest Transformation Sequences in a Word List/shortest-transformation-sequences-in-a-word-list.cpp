class Solution {
  public:
    vector<vector<string>> findSequences(vector<string> &words, string &s, string &e) {
        vector<vector<string>>ans;
        queue<vector<string>>q;
        unordered_set<string>st(words.begin(),words.end());
        vector<string>levelOfview;
        levelOfview.push_back(s);
        int level = 0;
        q.push({s});
        
        while(!q.empty()){
            vector<string>res = q.front();
            q.pop();
            if(res.size() > level){
                level = res.size();
                for(string s : levelOfview){
                    st.erase(s);
                }
                levelOfview.clear();
            }
            string word = res.back();
            if(word == e){
                if(ans.size() == 0){
                    ans.push_back(res);
                }
                else if(ans[0].size() == res.size()){
                    ans.push_back(res);
                }
            }
            
            for(int i=0;i<word.size();i++){
                char original = word[i];
                for(char ch='a';ch<='z';ch++){
                    word[i] = ch;
                    if(st.count(word) > 0){
                        res.push_back(word);
                        levelOfview.push_back(word);
                        q.push(res);
                        res.pop_back();
                    }
                }
                word[i] = original;
            }
            
        }
        return ans;
        
        
        
        
    }
};