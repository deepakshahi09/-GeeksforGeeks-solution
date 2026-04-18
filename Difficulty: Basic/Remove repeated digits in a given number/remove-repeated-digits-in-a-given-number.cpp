
long long int modify(long long int N) {
    string ans = to_string(N);
    string newans = "";
    int i = 1;
    while(i < ans.size()){
        if(ans[i-1] != ans[i]){
            newans+=ans[i-1];
            
        }
        i++;
    }
    newans+=ans[ans.size() -1];
    return stoll(newans);
    
    // your code here
    
}