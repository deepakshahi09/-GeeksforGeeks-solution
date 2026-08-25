/* Structure of a Tree Node
class Node {
public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    bool isSumProperty(Node *root) {
        queue<Node*>q;
        if(!root) return false;
        
        q.push(root);
        
        while(!q.empty()){
            Node* front = q.front();
            int sum = 0;
            q.pop();
            if(!front->left && !front->right){
                continue;
            }
            if(front->left){
                sum+=front->left->data;
            }
            if(front->right){
                sum+=front->right->data;
            }
            if(sum != front->data){
                return false;
            }
            
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
        return true;
    }
};