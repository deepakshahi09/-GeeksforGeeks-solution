class Solution {
  public:
    vector<vector<string>> findSequences(vector<string> &words, string &s, string &e) {
            vector<vector<string>>ans;
            queue<vector<string>>q;
            vector<string>useOflevel;
            int level = 0;
            useOflevel.push_back(s);
            q.push({s});
            unordered_set<string>st(words.begin(),words.end());
            
            while(!q.empty()){
                vector<string>res = q.front();
                q.pop();
                
                
                if(res.size() > level){
                    level = res.size();
                    for(string s : useOflevel){
                        st.erase(s);
                    }
                    useOflevel.clear();
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
                    for(char j='a';j<='z';j++){
                        word[i] = j;
                        if(st.count(word) > 0){
                            useOflevel.push_back(word);
                            res.push_back(word);
                            q.push(res);
                            res.pop_back();
                        }
                        
                    }
                    word[i]= original;
                }
                
                
                
            }
            return ans;
        
    }
};