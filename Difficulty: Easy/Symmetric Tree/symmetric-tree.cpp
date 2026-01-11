class Solution {
  public:
    
    bool solve(Node* r1, Node* r2) {

        // If both nodes are NULL, they are symmetric
        if (r1 == NULL && r2 == NULL)
            return true;

        // If one is NULL and other is not
        if (r1 == NULL || r2 == NULL)
            return false;

        // Check value and mirror subtrees
        return (r1->data == r2->data) &&
               solve(r1->left, r2->right) &&
               solve(r1->right, r2->left);
    }

    bool isSymmetric(Node* root) {

        // Empty tree is symmetric
        if (root == NULL)
            return true;

        // Check mirror of left and right subtree
        return solve(root->left, root->right);
    }
};
