class Solution {
public:
    // Function to find depth of leftmost leaf
    int findDepth(Node* root) {
        int depth = 0;
        while (root != NULL) {
            depth++;
            root = root->left;
        }
        return depth;
    }

    // Function to check perfect binary tree
    bool checkPerfect(Node* root, int depth, int level) {
        if (root == NULL)
            return true;

        // If leaf node
        if (root->left == NULL && root->right == NULL)
            return (depth == level + 1);

        // If only one child
        if (root->left == NULL || root->right == NULL)
            return false;

        return checkPerfect(root->left, depth, level + 1) &&
               checkPerfect(root->right, depth, level + 1);
    }

    // Main function
    bool isPerfect(Node* root) {
        int depth = findDepth(root);
        return checkPerfect(root, depth, 0);
    }
};
