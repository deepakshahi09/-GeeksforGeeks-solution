/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    int oddSum = 0;
    int evenSum = 0;
    void solve(Node* root,int level){
        if(root == NULL){
            return;
        }
        if(level % 2 == 1){
            evenSum+=root->data;
        }
        else{
            oddSum+=root->data;
        }
        solve(root->left,level+1);
        solve(root->right,level+1);
    }
    /*You are required to complete this function*/
    int getLevelDiff(Node *root) {
        solve(root,1);
        return evenSum-oddSum;
        // Your code here
        
    }
};