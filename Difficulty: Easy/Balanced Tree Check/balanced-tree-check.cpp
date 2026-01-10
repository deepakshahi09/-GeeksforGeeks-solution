/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int height(Node* root){
        if(root == NULL){
            return 0;
        }
        int lh = height(root->left);
        if(lh == -1){
            return -1;
        }
        int rh = height(root->right);
        if(rh == -1){
            return -1;
        }
        if(abs(lh-rh)>1){
            return -1;
        }
        return 1+max(lh,rh);
        
    }
    bool isBalanced(Node* root) {
        return height(root) != -1;
        // code here
        
    }
};