class Solution {
  public:
    int wordLadder(vector<string> &words, string &s, string &e) {
        unordered_set<string>st(words.begin(),words.end());
        queue<pair<string,int>>q;
        q.push({s,1});
        st.erase(s);
        
        while(!q.empty()){
            string word = q.front().first;
            int step = q.front().second;
            q.pop();
            if(word == e){
                return step;
            }
            
            for(int i=0;i<word.size();i++){
                char original = word[i];
                char ch = word[i];
                for(char j='a'; j<='z';j++){
                    word[i] = j;
                    
                    if(st.find(word)!=st.end()){
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