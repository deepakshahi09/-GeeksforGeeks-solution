/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};*/

class Solution {
  public:
    void solve(Node* root, int &sum){
        if(!root){
            return;
        }
        solve(root->right,sum);
        int temp = root->data;
        root->data = sum;
        sum+=temp;
        solve(root->left,sum);
    }
    void transformTree(Node *root) {
        // code here
        int sum = 0;
        return solve(root,sum);
        
        
    }
};