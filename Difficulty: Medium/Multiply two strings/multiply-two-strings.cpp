class Solution {
  public:
    string multiplyStrings(string &s1, string &s2) {
        bool neg = false;
        if(s1[0] == '-'){
            neg = !neg;
            s1 = s1.substr(1);
        }
        if(s2[0] == '-'){
            neg = !neg;
            s2 = s2.substr(1);
        }
        while(s1.size() > 1 && s1[0] == '0'){
            s1 = s1.erase(0,1);
        }
        while(s2.size() > 1 && s2[0] == '0'){
            s2 = s2.erase(0,1);
        }
        if(s1 == "0" || s2 == "0") return "0";
        int n = s1.size();
        int m = s2.size();
        vector<int>res(n+m,0);
        
        for(int i = n-1; i>=0;i--){
            for(int j = m-1;j>=0;j--){
                int mul = (s1[i] - '0')*(s2[j] -'0');
                int sum = res[i+j+1] + mul;
                res[i+j+1] = sum % 10;
                res[i+j] += sum/10;
            }
        }
        
        string ans = "";
        for(int num : res){
    if(!(ans == "" && num == 0)){
        ans += (num + '0');
    }
}
        
        if(neg){
            ans = '-'+ans;
        }
        return ans;
        
    }
};