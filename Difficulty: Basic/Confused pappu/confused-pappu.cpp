long long findDiff(long long amount) {
    string s = to_string(amount);
    int i = 0;
    while(i < s.size()){
        if(s[i] == '6'){
            s[i] = '9';
        }
        i++;
    }
    long long num = stoll(s);
    return num - amount;
    // code
}