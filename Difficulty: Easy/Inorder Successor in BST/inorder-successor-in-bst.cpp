class Solution {
  public:
    int leftmost(Node* root) {
        Node* curr = root;
        while (curr->left != NULL) {
            curr = curr->left;
        }
        return curr->data;
    }

    // returns the inorder successor of the Node x in BST
    int inOrderSuccessor(Node *root, Node *x) {
        if (root == NULL)
            return -1;

        // Case 1: right subtree exists
        if (x->right != NULL)
            return leftmost(x->right);

        // Case 2: no right subtree
        Node* succ = NULL;
        Node* curr = root;

        while (curr != NULL) {
            if (x->data < curr->data) {
                succ = curr;
                curr = curr->left;
            } else {
                curr = curr->right;
            }
        }

        return (succ == NULL) ? -1 : succ->data;
    }
};
