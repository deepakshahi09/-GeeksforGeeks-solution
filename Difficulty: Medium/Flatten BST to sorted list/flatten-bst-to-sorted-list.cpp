class Solution {
  public:
    // head will point to the first (smallest) node in flattened BST
    Node* head = NULL;

    // prev keeps track of previously visited node in inorder traversal
    Node* prev = NULL;

    // Inorder traversal: Left -> Root -> Right
    void inorder(Node* root) {

        // Base case
        if (root == NULL)
            return;

        // Visit left subtree
        inorder(root->left);

        // If this is the first node visited
        if (prev == NULL) {
            head = root;          // set head of flattened list
        }
        else {
            prev->right = root;  // link previous node to current
        }

        // As required, left child must be NULL
        root->left = NULL;

        // Move prev to current node
        prev = root;

        // Visit right subtree
        inorder(root->right);
    }

    // Function to flatten BST
    Node* flattenBST(Node* root) {

        // Perform inorder traversal and modify links
        inorder(root);

        // Return head of sorted linked list
        return head;
    }
};
