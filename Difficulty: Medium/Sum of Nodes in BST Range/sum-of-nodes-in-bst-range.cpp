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
    void sum(Node* root, int &ans, int l, int r){
        if(!root){
            return;
        }
        sum(root->left,ans,l,r);
        if(root->data >= l && root->data <= r){
            ans+=root->data;
        }
        sum(root->right,ans,l,r);
    }
    
    int nodeSum(Node* root, int l, int r) {
        int su = 0;
        sum(root,su,l,r);
        return su;
        // code here
        
    }
};
