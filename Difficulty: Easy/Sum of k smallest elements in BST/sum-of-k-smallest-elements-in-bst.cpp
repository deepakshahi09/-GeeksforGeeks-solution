
    int cnt;
    int sm;

    void solve(Node* root, int k) {
        if (root == NULL || cnt >= k)
            return;

        solve(root->left, k);

        if (cnt < k) {
            sm += root->data;
            cnt++;
        }

        solve(root->right, k);
    }

    int sum(Node* root, int k) {
        cnt = 0;
        sm = 0;
        solve(root, k);
        return sm;
    }

