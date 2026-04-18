int check(string a, string b) {
    
    
        // remove leading zeros
        int i = 0;
        while(i < a.size() && a[i] == '0') i++;
        a = a.substr(i);

        i = 0;
        while(i < b.size() && b[i] == '0') i++;
        b = b.substr(i);

        // if empty → means "0"
        if(a == "") a = "0";
        if(b == "") b = "0";

        // Step 1: length compare
        if(a.size() < b.size()) return 1;
        if(a.size() > b.size()) return 2;

        // Step 2: digit compare
        for(int i = 0; i < a.size(); i++){
            if(a[i] < b[i]) return 1;
            if(a[i] > b[i]) return 2;
        }

        return 3;

    // code
}