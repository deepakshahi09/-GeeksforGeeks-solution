// User function template for C++

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
        int ls = solve(root->left);
        int rs = solve(root->right);
        
        int old = root->data;
        root->data = ls+rs;
        return old + ls + rs;
    }

    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node) {
        solve(node);
        // Your code here
        
    }
};