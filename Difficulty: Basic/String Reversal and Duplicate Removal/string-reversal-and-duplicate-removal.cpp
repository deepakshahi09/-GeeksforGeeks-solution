string reverseString(string s) {
    string ans = "";
    
    int visited[256] = {0};
    
    int i = s.length()-1;
    
    while(i >= 0){
        char ch = s[i];
        if(s[i] != ' ' && visited[ch] == 0){
            ans.push_back(ch);
            visited[ch] = 1;
        }
        i--;
    }
    return ans;
    
    // code here.
}