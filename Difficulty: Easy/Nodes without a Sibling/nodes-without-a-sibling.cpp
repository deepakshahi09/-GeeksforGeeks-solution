/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
void solve(Node* root, vector<int>&ans){
    if(root == NULL){
        return;
    }
    if(root->left != NULL && root->right == NULL){
        ans.push_back(root->left->data);
    }
    if(root->right != NULL && root->left == NULL){
        ans.push_back(root->right->data);
    }
    solve(root->left,ans);
    solve(root->right,ans);
}
vector<int> noSibling(Node* node) {
    vector<int>ans;
    solve(node,ans);
    if(ans.size() == 0){
        return {-1};
    }
    sort(ans.begin(),ans.end());
    return ans;
    // code here
    
}