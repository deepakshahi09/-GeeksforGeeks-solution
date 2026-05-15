

class Solution {
  public:
    string encryptString(string s) {
        // code here
        string temp = "";
        int count = 1;
        for(int i=1;i<s.size();i++){
            if(s[i] == s[i-1]){
                count++;
            }
            else{
                temp+=s[i-1];
                temp+=to_string(count);
                count = 1;
            }
        }
      
        temp+=s[s.size()-1];
        temp+=to_string(count);
        
        reverse(temp.begin(),temp.end());
        
        return temp;
        
    }
};