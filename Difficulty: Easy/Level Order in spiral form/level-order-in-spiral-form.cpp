class Solution {
public:
    // helper function to store nodes level-wise
    void traverse(Node* root, int level, vector<vector<int>>& levels) {
        if (!root) return;

        // create new level if needed
        if (levels.size() == level)
            levels.push_back({});

        // store current node in its level
        levels[level].push_back(root->data);

        // recursive traversal
        traverse(root->left, level + 1, levels);
        traverse(root->right, level + 1, levels);
    }

    vector<int> findSpiral(Node* root) {
        vector<vector<int>> levels;
        vector<int> result;

        // build level order structure
        traverse(root, 0, levels);

        // now read levels in spiral form
        bool reverseFlag = true; // even levels → right to left
        for (auto &level : levels) {
            if (reverseFlag)
                result.insert(result.end(), level.rbegin(), level.rend());
            else
                result.insert(result.end(), level.begin(), level.end());

            reverseFlag = !reverseFlag;
        }

        return result;
    }
};
