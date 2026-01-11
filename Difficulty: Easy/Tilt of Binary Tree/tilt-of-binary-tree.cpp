/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int total = 0;
    int solve(Node* root){
        if(root == NULL){
            return 0;
        }
        int lh = solve(root->left);
        int rh = solve(root->right);
        
        total += abs(lh - rh);
        return root->data + lh + rh;
        
    }
    // Your are required to complete this function
    // function should return the tilt of the tree
    int tiltTree(Node *root) {
        solve(root);
        return total;
        // code here
        
    }
};