class Solution {
  public:

    void find(Node* root, int pos, int &l, int &r) {
        if (!root) return;
        l = min(l, pos);
        r = max(r, pos);
        find(root->left, pos - 1, l, r);
        find(root->right, pos + 1, l, r);
    }

    vector<int> bottomView(Node *root) {
        if (!root) return {};

        int l = 0, r = 0;
        find(root, 0, l, r);

        vector<int> ans(r - l + 1);

        queue<Node*> q;
        queue<int> index;

        q.push(root);
        index.push(-l);

        while (!q.empty()) {
            Node* curr = q.front(); q.pop();
            int pos = index.front(); index.pop();

            // overwrite every time (key difference)
            ans[pos] = curr->data;

            if (curr->left) {
                q.push(curr->left);
                index.push(pos - 1);
            }
            if (curr->right) {
                q.push(curr->right);
                index.push(pos + 1);
            }
        }
        return ans;
    }
};
