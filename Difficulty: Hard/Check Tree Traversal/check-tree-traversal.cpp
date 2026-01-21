class Solution {
  public:
    bool checktree(int preorder[], int inorder[], int postorder[], int N) {

        // Base case
        if (N == 0)
            return true;

        // Root must be same
        if (preorder[0] != postorder[N - 1])
            return false;

        // Find root in inorder
        int rootIndex = -1;
        for (int i = 0; i < N; i++) {
            if (inorder[i] == preorder[0]) {
                rootIndex = i;
                break;
            }
        }

        // Root not found
        if (rootIndex == -1)
            return false;

        // Check left subtree
        bool left = checktree(
            preorder + 1,
            inorder,
            postorder,
            rootIndex
        );

        // Check right subtree
        bool right = checktree(
            preorder + rootIndex + 1,
            inorder + rootIndex + 1,
            postorder + rootIndex,
            N - rootIndex - 1
        );

        return left && right;
    }
};
