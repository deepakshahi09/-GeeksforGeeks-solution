class Solution {
  public:
    Node* lca(Node* root, int p, int q) {
        if (root == NULL || root->data == p || root->data == q)
            return root;

        Node* left = lca(root->left, p, q);
        Node* right = lca(root->right, p, q);

        if (left && right)
            return root;

        return left ? left : right;
    }
};
