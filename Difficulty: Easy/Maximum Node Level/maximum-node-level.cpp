class Solution {
public:
    int maxNodeLevel(Node *root) {
        if (!root) return -1;

        queue<Node*> q;
        q.push(root);

        int level = 0;
        int ansLevel = 0;
        int maxNodes = 0;

        while (!q.empty()) {
            int sz = q.size();

            if (sz > maxNodes) {
                maxNodes = sz;
                ansLevel = level;
            }

            for (int i = 0; i < sz; i++) {
                Node* curr = q.front();
                q.pop();

                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
            level++;
        }

        return ansLevel;
    }
};
