/* The structure of Node
struct Node{
    int data;
    Node *left,*right;
}; */

class Solution {
  public:
    int su ;
    void sum(Node* root){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            su+=root->data;
        }
        sum(root->left);
        sum(root->right);
    }
    /*You are required to complete below method */
    int sumOfLeafNodes(Node *root) { 
        
        /*Your code here */ 
        su=0;
        sum(root);
        return su;
        
    }
};