class Solution {
  public:
    int getLevel(struct Node *node, int target) {
        if (node == NULL)
            return 0;

        queue<Node*> q;
        q.push(node);
        int level = 1;

        while (!q.empty()) {
            int n = q.size();

            for (int i = 0; i < n; i++) {
                Node* front = q.front();
                q.pop(); 

                if (front->data == target)
                    return level;

                if (front->left)
                    q.push(front->left);
                if (front->right)
                    q.push(front->right);
            }
            level++;
        }
        return 0;
    }
};
