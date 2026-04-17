string convert(string s) {
    int i = 0;
    while(i < s.size()){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = 'a' + ('z' - s[i]);
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = 'A' + ('Z' - s[i]);
        }
        i++;
    }
    return s;
    // code here.
}