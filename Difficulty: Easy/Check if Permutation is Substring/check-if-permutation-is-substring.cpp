// User function Template for C++
class Solution {
  public:
    bool search(string& txt, string& pat) {
        int n = txt.size();
        int m = pat.size();
        
        int pt[26] = {0};
        int win[26] = {0};
        
        for(int i=0;i<m;i++){
            pt[pat[i]-'a']++;
            win[txt[i]-'a']++;
        }
        int ok = 1;
        for(int i=0;i<26;i++){
            if(pt[i] != win[i]){
                ok = 0;
                break;
            }
        }
        if(ok == 1) return true;
        
        for(int i=m;i<n;i++){
            win[txt[i]-'a']++;
            win[txt[i-m]-'a']--;
            
             int ok = 1;
             
             for(int i=0;i<26;i++){
                 if(pt[i] != win[i]){
                     ok = 0;
                     break;
                 }
             }
             if(ok == 1) return true;
        }
        return false;
        
        
        
        // Write your code here
        
    }
};