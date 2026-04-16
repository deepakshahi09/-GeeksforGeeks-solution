
string ReverseSort(string s) {
    int freq[26] = {0};

        int i = 0;
        while(i < s.size()){
            freq[s[i] - 'a']++;
            i++;
        }

        string ans = "";

        int j = 25; // start from 'z'
        while(j >= 0){
            while(freq[j] > 0){
                ans.push_back('a' + j);
                freq[j]--;
            }
            j--;
        }

        return ans;
    // complete the function here
}