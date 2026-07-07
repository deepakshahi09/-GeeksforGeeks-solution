class Solution {
  public:
    int wordLadder(vector<string> &words, string &s, string &e) {
        unordered_set<string>st(words.begin(),words.end());
        queue<pair<string , int>>q;
        
        q.push({s,1});
        
        while(!q.empty()){
            auto[word,step]=q.front();
            q.pop();
            if(word == e){
                return step;
            }
            for(int i=0;i<word.size();i++){
                char original = word[i];
                for(char ch ='a';ch<='z';ch++){
                    word[i] = ch;
                    if(st.count(word)>0){
                        q.push({word,step+1});
                        st.erase(word);
                    }
                    
                }
                word[i] = original;
            }
        }
        return 0;
        
        
        
    }
};