class Solution {
  public:
    bool isPerfect(Node *root) {
        if (root == NULL) {
            return true;
        }

        // Step 1: Find depth of leftmost leaf
        int depth = 0;
        Node* temp = root;
        while (temp) {
            depth++;
            temp = temp->left;
        }

        // Step 2: Level order traversal
        queue<pair<Node*, int>> q;
        q.push({root, 1});

        while (!q.empty()) {
            Node* curr = q.front().first;
            int level = q.front().second;
            q.pop();

            // If leaf node
            if (curr->left == NULL && curr->right == NULL) {
                if (level != depth) {
                    return false;
                }
            }
            // If internal node must have two children
            else if (curr->left == NULL || curr->right == NULL) {
                return false;
            }

            if (curr->left) {
                q.push({curr->left, level + 1});
            }
            if (curr->right) {
                q.push({curr->right, level + 1});
            }
        }
        return true;
    }
};
