string solve(string a) {
    // code here
    int count = 0;
    int freq[26] = {0};
    for(char ch : a){
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
            freq[ch - 'a'] = 1;
        }
    }
    int j = 0;
    while(j< 26){
        if(freq[j] == 1){
            count++;
        }
        j++;
    }
    if(count % 2 == 0){
        return "SHE!";
    }
    return "HE!";
}