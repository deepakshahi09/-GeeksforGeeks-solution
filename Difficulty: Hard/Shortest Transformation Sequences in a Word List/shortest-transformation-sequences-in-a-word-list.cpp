class Solution {
  public:
    vector<vector<string>> findSequences(vector<string> &words, string &s, string &e) {
      
        vector<vector<string>>ans;
        vector<string>levelofview;
        unordered_set<string>st(words.begin(),words.end());
        queue<vector<string>>q;
        q.push({s});
        levelofview.push_back(s);
        int level = 0;
        
        
        while(!q.empty()){
            vector<string>res = q.front();
            q.pop();
            
            if(res.size() > level){
                level = res.size();
                for(auto it:levelofview){
                    st.erase(it);
                }
                levelofview.clear();
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
                for(char ch = 'a';ch<='z';ch++){
                    word[i] = ch;
                    if(st.count(word)>0){
                        levelofview.push_back(word);
                        res.push_back(word);
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