/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int ans = -1;
    int count = 0;
    void solve(Node* root, int k){
        if(!root){
            return;
        }
        solve(root->left,k);
        count++;
        if(count == k){
            ans = root->data;
            return;
        }
       
        solve(root->right,k);
    }
    int kthSmallest(Node *root, int k) {
        // code here
        solve(root,k);
        return ans;
        
    }
};