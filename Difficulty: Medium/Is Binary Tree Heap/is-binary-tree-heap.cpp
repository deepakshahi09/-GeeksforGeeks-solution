/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    bool isHeap(Node* root) {
        // code here
        if(!root){
            return false;
        }
        queue<Node*>q;
        q.push(root);
        bool isleaf = false;
        
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            if(curr->left != NULL){
                if(isleaf || curr->left->data > curr->data){
                    return false;
                }
                q.push(curr->left);
            }
            else{
                isleaf = true;
            }
            
            if(curr->right != NULL){
                if(isleaf || curr->right->data > curr->data){
                    return false;
                }
                q.push(curr->right);
            }
            else{
                isleaf = true;
            }
            
            
        }
        return true;
    }
};








