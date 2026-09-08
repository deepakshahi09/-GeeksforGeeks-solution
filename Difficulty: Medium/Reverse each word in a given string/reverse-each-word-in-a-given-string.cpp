class Solution {
	public:
	string reverseWords(string &s) {
		// code here
		int n = s.size();
		int i = 0;
		while (i < n && s[i] == ' ') {
			i++;
		}
		int j = n - 1;
		while (j>0 && s[j] == ' ') {
			j--;
		}
		s = s.substr(i, j - i + 1);
		n = s.size();
		string ans = "";
		string word = "";
		for (int i = 0; i<s.size(); i++) {
			if (s[i] != ' ') {
				word += s[i];
			}
			else {
				if (!word.empty()) {
					reverse(word.begin(), word.end());
					ans += word;
					ans += ' ';
					word = "";
				}
			}
		}
		if (!word.empty()) {
			reverse(word.begin(), word.end());
			ans += word;
		}
		
		return ans;
	}
};
