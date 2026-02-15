// User function Template for C++

// Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/
class Solution {
  public:
    // Function to return maximum path product from any node in a tree.
    long long findMaxScore(Node* root) {
        if(!root){
            return 0;
        }
        if(root->left == NULL && root->right == NULL){
            return root->data;
        }
        long long leftpro= 0;
        if(root->left){
            leftpro = findMaxScore(root->left);
        }
        long long rightpro = 0;
        if(root->right){
            rightpro = findMaxScore(root->right);
        }
        return (long long)root->data * max(leftpro,rightpro);
        
        // Your code goes here
    }
};