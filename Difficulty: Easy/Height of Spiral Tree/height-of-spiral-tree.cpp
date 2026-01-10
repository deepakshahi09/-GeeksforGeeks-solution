int findTreeHeight(Node* root) {
    if (root == NULL)
        return -1;

    int lh = -1, rh = -1;

    // valid left child (not DLL link)
    if (root->left && root->left->right != root)
        lh = findTreeHeight(root->left);

    // valid right child (not DLL link)
    if (root->right && root->right->left != root)
        rh = findTreeHeight(root->right);

    return 1 + max(lh, rh);
}
