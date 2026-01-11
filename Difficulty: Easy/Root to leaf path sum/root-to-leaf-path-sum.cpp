/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to
complete this function */
class Solution {
  public:
    bool hasPathSum(Node *root, int target) {
        // Your code here
        if(root ==  NULL){
            return false;
        }
        if(root->left == NULL && root->right == NULL){
            return (target == root->data);
        }
        target = target-root->data;
        return (hasPathSum(root->left, target) || hasPathSum(root->right,target));
    }
    
};