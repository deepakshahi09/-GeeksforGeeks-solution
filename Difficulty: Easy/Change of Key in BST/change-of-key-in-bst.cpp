node* findMin(node* root) {
    while (root->left)
        root = root->left;
    return root;
}

node* deleteNode(node* root, int key) {
    if (!root) return root;

    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else {
        if (!root->left)
            return root->right;
        else if (!root->right)
            return root->left;

        node* temp = findMin(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

node* insert(node* root, int key) {
    if (!root)
        return new node(key);   // ✅ FIXED

    if (key < root->key)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);

    return root;
}

struct node* changeKey(struct node* root, int oldVal, int newVal) {
    root = deleteNode(root, oldVal);
    root = insert(root, newVal);
    return root;
}
