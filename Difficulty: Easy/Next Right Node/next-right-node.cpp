class Solution {
  public:
    Node *nextRight(Node *root, int key) {
        if(!root) return new Node(-1);

        queue<Node*> q;
        q.push(root);

        while(!q.empty()) {
            int size = q.size();  
            for(int i = 0; i < size; i++) {
                Node* front = q.front();
                q.pop();

                if(front->data == key) {
                    if(i != size - 1) {
                        return q.front(); 
                    } else {
                        return new Node(-1); 
                    }
                }

                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
        }

        return new Node(-1);
    }
};
