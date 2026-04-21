class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
         int map1[26];
        int map2[26];
        
        int i = 0;
        while(i < 26){
            map1[i] = -1;
            map2[i] = -1;
            i++;
        }
        i = 0;
        while(i < s1.size()){
            int a = s1[i] - 'a';
            int b = s2[i]- 'a';
            
            if(map1[a] == -1 && map2[b] == -1){
                map1[a] = b;
                map2[b] = a;
            }
            else{
                if(map1[a] != b && map2[b] != a){
                    return false;
                }
            }
            i++;
        }
        return true;
        
        // code here
        
    }
};