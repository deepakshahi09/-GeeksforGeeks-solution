class Solution {
  public:
    string compressString(string &s) {
        //  code here
        string str = "";
        for(char c : s){
            str+=tolower(c);
        }
        
        int c = 1;
        string ans = "";
        for(int i=1;i<str.size();i++){
            if(str[i] == str[i-1]){
                c++;
            }
            else{
                ans+=str[i-1];
                ans += to_string(c);
                c = 1;
                
            }
        }
        ans+=str[str.size()-1];
        ans += to_string(c);
        return ans;
    }
};