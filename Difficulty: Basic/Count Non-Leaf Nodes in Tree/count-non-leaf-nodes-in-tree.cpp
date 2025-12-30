class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        if (root == NULL)
            return 0;

        // if node has at least one child
        if (root->left != NULL || root->right != NULL)
            return 1 + countNonLeafNodes(root->left) + countNonLeafNodes(root->right);

        return 0; // leaf node
    }
};
