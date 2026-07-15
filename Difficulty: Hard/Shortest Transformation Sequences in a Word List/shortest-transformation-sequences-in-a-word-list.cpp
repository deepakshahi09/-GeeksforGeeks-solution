class Solution {
public:
    vector<vector<string>> findSequences(vector<string> &words, string &s, string &e) {

        unordered_set<string> st(words.begin(), words.end());

        queue<vector<string>> q;
        q.push({s});

        vector<string> usedOnLevel;
        usedOnLevel.push_back(s);

        int level = 1;

        vector<vector<string>> ans;

        while (!q.empty()) {

            vector<string> path = q.front();
            q.pop();

            // New BFS level
            if (path.size() > level) {
                level = path.size();

                for (auto &word : usedOnLevel)
                    st.erase(word);

                usedOnLevel.clear();

                // Stop after shortest paths are found
                if (!ans.empty() && path.size() > ans[0].size())
                    break;
            }

            string word = path.back();

            if (word == e) {
                if (ans.empty())
                    ans.push_back(path);
                else if (ans[0].size() == path.size())
                    ans.push_back(path);

                continue;
            }

            for (int i = 0; i < word.size(); i++) {

                char original = word[i];

                for (char ch = 'a'; ch <= 'z'; ch++) {

                    if (ch == original)
                        continue;

                    word[i] = ch;

                    if (st.count(word)) {
                        path.push_back(word);
                        q.push(path);
                        usedOnLevel.push_back(word);
                        path.pop_back();
                    }
                }

                word[i] = original;
            }
        }

        return ans;
    }
};