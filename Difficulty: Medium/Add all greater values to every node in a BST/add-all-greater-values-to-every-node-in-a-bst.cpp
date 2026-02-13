/*
Node structure is as follows:
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
// modify the BST and return its root
void solve(Node* root, int &sum){
    if(!root){
        return;
    }
    solve(root->right,sum);
    sum+=root->data;
    root->data = sum;
    solve(root->left,sum);
}
Node* modify(Node* root) {
    int sum= 0;
    solve(root,sum);
    return root;
    // Your code here
    
}