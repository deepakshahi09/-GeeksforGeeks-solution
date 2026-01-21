class Solution {
  public:
    int postIndex;

    Node* solve(vector<int>& inorder, vector<int>& postorder, int st, int lst) {
        if (st > lst)
            return NULL;

        // Create root from postorder
        Node* root = new Node(postorder[postIndex--]);

        // Find root in inorder
        int pos;
        for (int i = st; i <= lst; i++) {
            if (inorder[i] == root->data) {
                pos = i;
                break;
            }
        }

        // Build right first, then left
        root->right = solve(inorder, postorder, pos + 1, lst);
        root->left  = solve(inorder, postorder, st, pos - 1);

        return root;
    }

    Node *buildTree(vector<int> &inorder, vector<int> &postorder) {
        postIndex = postorder.size() - 1;
        return solve(inorder, postorder, 0, inorder.size() - 1);
    }
};
