class Solution {
public:
    vector<vector<string>> findSequences(vector<string> &words, string &s, string &e) {

        unordered_set<string> st(words.begin(), words.end());

        vector<vector<string>> ans;

        queue<vector<string>> q;

        // Start path
        q.push({s});

        vector<string> usedOnLevel;
        usedOnLevel.push_back(s);

        int level = 1;

        while (!q.empty()) {

            vector<string> path = q.front();
            q.pop();

            // New BFS level reached
            if (path.size() > level) {

                level = path.size();

                // Remove words used in previous level
                for (auto word : usedOnLevel) {
                    st.erase(word);
                }

                usedOnLevel.clear();
            }

            string word = path.back();

            // Destination reached
            if (word == e) {

                if (ans.empty()) {
                    ans.push_back(path);
                }
                else if (ans[0].size() == path.size()) {
                    ans.push_back(path);
                }

                continue;
            }

            // Generate all possible neighbours
            for (int i = 0; i < word.size(); i++) {

                char original = word[i];

                for (char ch = 'a'; ch <= 'z'; ch++) {

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