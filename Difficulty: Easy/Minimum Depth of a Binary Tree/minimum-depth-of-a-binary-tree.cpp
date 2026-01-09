/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    /*You are required to complete this method*/
    int minDepth(Node *root) {
        // Your code here
            if(root == NULL){
                return 0;
            }
            if(root->left == NULL){
                return 1+minDepth(root->right);
            }
            if(root->right == NULL){
                return 1+minDepth(root->left);
            }
            return 1+min(minDepth(root->left) , minDepth(root->right));
        
    }
};