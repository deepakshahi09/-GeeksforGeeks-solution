class Solution {
  public:
    int preIndex = 0;

    Node* solve(vector<int> &inorder, vector<int> &preorder, int start, int end) {
        if (start > end)
            return NULL;

        // Create root from preorder
        Node* root = new Node(preorder[preIndex++]);

        // Find root position in inorder
        int pos;
        for (int i = start; i <= end; i++) {
            if (inorder[i] == root->data) {
                pos = i;
                break;
            }
        }

        // Build left and right subtrees
        root->left = solve(inorder, preorder, start, pos - 1);
        root->right = solve(inorder, preorder, pos + 1, end);

        return root;
    }

    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        preIndex = 0;
        return solve(inorder, preorder, 0, inorder.size() - 1);
    }
};
