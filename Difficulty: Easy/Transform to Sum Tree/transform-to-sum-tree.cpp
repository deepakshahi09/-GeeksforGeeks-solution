/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:
  int solve(Node* root){
        if(root == NULL){
            return 0;
        }
        int leftSum = solve(root->left);
        int rightSum = solve(root->right);
        
        int oldval = root->data;
        root->data = leftSum + rightSum;
        return root->data + oldval;
    }

    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node) {
        solve(node);
        // Your code here
        
    }
};