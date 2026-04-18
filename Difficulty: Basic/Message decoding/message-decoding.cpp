bool decode(string S) {
    string he = "hello";
    int i = 0;

    for(int j = 0; j < S.size(); j++) {
        if(i < he.size() && he[i] == S[j]) {
            i++;
        }
    }

    return i == he.size();
}