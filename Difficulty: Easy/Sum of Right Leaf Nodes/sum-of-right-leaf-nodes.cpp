/*
Structure of the node of the binary tree is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
*/

class Solution {
  public:
    int rightLeafSum(Node *root) {
        if (root == NULL)
            return 0;

        int sum = 0;

        // Check if right child exists and is a leaf
        if (root->right != NULL &&
            root->right->left == NULL &&
            root->right->right == NULL) {
            sum += root->right->data;
        }

        // Recur for left and right subtree
        sum += rightLeafSum(root->left);
        sum += rightLeafSum(root->right);

        return sum;
    }
};
