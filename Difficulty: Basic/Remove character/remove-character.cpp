// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
           int mark[26] = {0};
    int i = 0;

    // str2 ke characters mark karo
    while(i < str2.size()){
        mark[str2[i] - 'a'] = 1;
        i++;
    }

    string ans = "";
    i = 0;

    // str1 check karo
    while(i < str1.size()){
        if(mark[str1[i] - 'a'] == 0){
            ans = ans + str1[i];
        }
        i++;
    }

    return ans;
        // code here
        
    }
};
