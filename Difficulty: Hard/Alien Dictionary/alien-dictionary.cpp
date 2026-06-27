class Solution {
  public:
    string findOrder(vector<string> &words) {
        vector<int>adj[26];
        vector<int>pa(26,0);
        vector<int>indegree(26,0);
        
        for(string s : words){
            for(char ch : s){
                pa[ch-'a']++;
            }
        }
        for(int i=0;i<words.size()-1;i++){
            string s1 = words[i];
            string s2 = words[i+1];
            
            int len = min(s1.size(),s2.size());
            bool fount = false;
            for(int j=0;j<len;j++){
                if(s1[j] != s2[j]){
                    adj[s1[j] -'a'].push_back(s2[j]-'a');
                    indegree[s2[j]-'a']++;
                    fount = true;
                    break;
                }
            }
            if(!fount && s1.size() > s2.size()){
                return "";
            }
            
        }
        
        queue<int>q;
        int total = 0;
        for(int i=0;i<26;i++){
            if(pa[i]){
                total++;
                if(indegree[i] == 0){
                    q.push(i);
                }
            }
        }
        string ans = "";
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node+'a');
            for(int i : adj[node]){
                indegree[i]--;
                if(indegree[i] == 0){
                    q.push(i);
                }
            }
        }
        if(ans.size() != total){
            return "";
        }
        return ans;
        
        
    }
};