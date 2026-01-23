class Solution {
public:
    int search(string pat, string txt) {
        unordered_map<char, int> mp;

        // Frequency of pattern
        for (char c : pat) {
            mp[c]++;
        }

        int i = 0, j = 0;
        int k = pat.length();
        int count = mp.size();
        int ans = 0;

        while (j < txt.length()) {
            // Include current character
            if (mp.find(txt[j]) != mp.end()) {
                mp[txt[j]]--;
                if (mp[txt[j]] == 0) {
                    count--;
                }
            }

            // Window size not reached
            if (j - i + 1 < k) {
                j++;
            }
            // Window size == k
            else {
                if (count == 0) {
                    ans++;
                }

                // Remove outgoing character
                if (mp.find(txt[i]) != mp.end()) {
                    if (mp[txt[i]] == 0) {
                        count++;
                    }
                    mp[txt[i]]++;
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};
