/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

};
*/

class Solution {
  public:
    int prev = -1;
    int ans = INT_MAX;
    void solve(Node* root){
        if(!root){
            return;
        }
        solve(root->left);
        if(prev != -1){
            ans = min(ans, root->data - prev);
        }
        prev = root->data;
        solve(root->right);
    }
    int absolute_diff(Node *root) {
        // Your code here
        solve(root);
        return ans;
        
    }
};
