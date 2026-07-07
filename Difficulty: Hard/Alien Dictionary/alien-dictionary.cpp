class Solution {
  public:
    string findOrder(vector<string> &words) {
        vector<int>adj[26];
        vector<int>indegree(26,0);
        vector<int>paresent(26,0);
        for(auto it : words){
            for(char ch : it){
                paresent[ch -'a']++;
            }
        }
        
        for(int i=0;i<words.size()-1;i++){
            string s1 = words[i];
            string s2 = words[i+1];
            bool found = false;
            int len = min(s1.size(),s2.size());
            for(int j=0;j<len;j++){
                if(s1[j] != s2[j]){
                    found = true;
                    adj[s1[j] -'a'].push_back(s2[j]-'a');
                    indegree[s2[j] -'a']++;
                    break;
                }
            }
            if(!found && s1.size() > s2.size()){
                return "";
            }
        }
        
        queue<int>q;
        int total = 0;
        for(int i=0;i<26;i++){
            if(paresent[i]){
                total++;
                if(indegree[i] == 0){
                    q.push(i);
                }
            }
            
        }
        string ans = "";
        
        while(!q.empty()){
            int top = q.front();
            q.pop();
            
            ans.push_back(top + 'a');
            for(int i : adj[top]){
                indegree[i]--;
                if(indegree[i] == 0){
                    q.push(i);
                }
            }
        }
        return ans.size() != total?"":ans;
        
        
        
        
        
        
    }
};