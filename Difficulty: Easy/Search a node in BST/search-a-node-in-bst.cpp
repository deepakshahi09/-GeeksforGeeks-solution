class Solution {
  public:
    bool search(Node* root, int key) {
        while (root != NULL) {
            if (root->data == key)
                return true;
            else if (key < root->data)
                root = root->left;
            else
                root = root->right;
        }
        return false;
    }
};
