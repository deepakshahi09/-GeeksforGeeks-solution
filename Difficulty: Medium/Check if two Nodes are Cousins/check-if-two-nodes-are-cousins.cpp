class Solution {
  public:
    bool parent(Node* root, int a, int b){
        if(!root) return false;

        if(root->left && root->right){
            if((root->left->data == a && root->right->data == b) ||
               (root->left->data == b && root->right->data == a)){
                return true;
            }
        }
        return parent(root->left, a, b) || parent(root->right, a, b);
    }

    bool isCousins(Node* root, int a, int b) {
        if(!root) return false;

        // 🔴 MAIN FIX
        if(a == b) return false;

        queue<Node*> q;
        q.push(root);

        int l1 = -1, l2 = -1;
        int level = 0;

        while(!q.empty()){
            int n = q.size();
            while(n--){
                Node* temp = q.front();
                q.pop();

                if(temp->data == a) l1 = level;
                if(temp->data == b) l2 = level;

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }

            if(l1 != -1 && l2 != -1) break;
            level++;
        }

        if(l1 == -1 || l2 == -1) return false;
        if(l1 != l2) return false;

        return !parent(root, a, b);
    }
};
