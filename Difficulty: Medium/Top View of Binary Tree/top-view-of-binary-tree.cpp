class Solution {
  public:

    void found(Node* root, int pos, int &l, int &r) {
        if (!root) return;

        l = min(l, pos);
        r = max(r, pos);

        found(root->left, pos - 1, l, r);
        found(root->right, pos + 1, l, r);
    }

    vector<int> topView(Node *root) {
        if (!root) return {};

        int l = 0, r = 0;
        found(root, 0, l, r);

        vector<int> ans(r - l + 1);
        vector<bool> filled(r - l + 1, false);

        queue<Node*> q;
        queue<int> index;

        q.push(root);
        index.push(-l);   // correct shift

        while (!q.empty()) {
            Node* front = q.front();
            q.pop();

            int pos = index.front();
            index.pop();

            if (!filled[pos]) {
                filled[pos] = true;
                ans[pos] = front->data;
            }

            if (front->left) {
                q.push(front->left);
                index.push(pos - 1);
            }

            if (front->right) {
                q.push(front->right);
                index.push(pos + 1);
            }
        }
        return ans;
    }
};
