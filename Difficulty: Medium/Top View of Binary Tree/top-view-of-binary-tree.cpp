class Solution {
  public:
    
    void findRange(Node* root, int hd, int &l, int &r) {
        if (!root) return;
        l = min(l, hd);
        r = max(r, hd);
        findRange(root->left, hd - 1, l, r);
        findRange(root->right, hd + 1, l, r);
    }

    vector<int> topView(Node *root) {
        int l = 0, r = 0;
        findRange(root, 0, l, r);

        vector<int> ans(r - l + 1);
        vector<bool> filled(r - l + 1, false);

        queue<Node*> q;
        queue<int> index;

        q.push(root);
        index.push(-l);   // shift index

        while (!q.empty()) {
            Node* temp = q.front(); q.pop();
            int pos = index.front(); index.pop();

            if (!filled[pos]) {
                filled[pos] = true;
                ans[pos] = temp->data;
            }

            if (temp->left) {
                q.push(temp->left);
                index.push(pos - 1);
            }

            if (temp->right) {
                q.push(temp->right);
                index.push(pos + 1);
            }
        }
        return ans;
    }
};
