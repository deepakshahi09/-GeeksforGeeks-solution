/*
Tree Node
struct Node {
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
    // Function to find the least absolute difference between any node
    // value of the BST and the given integer.
    int minDiff(Node *root, int k) {
        // Your code here
        int ans = INT_MAX;
        while(root){
            int mindff = abs(root->data - k);
            ans = min(ans,mindff);
            
            if(k < root->data){
                root = root->left;
            }
            else if(k > root->data){
                root = root->right;
            }
            else{
                return 0;
            }
            
        }
        return ans;
    }
};