
class Solution {
  public:
    int getCount(string s, int N) {
        int freq[26] = {0};
        int i = 0;
        while(i < s.size()){
            char ch = s[i];
                freq[ch -'a']++;
                while(i < s.size() && s[i] == ch){
                    i++;
                }
            
            
        }
        
        int count = 0;
        int j = 25;
        while(j >= 0){
            if(freq[j] == N){
                count++;
            }
            j--;
        }
        return count;
        // code here.
    }
};