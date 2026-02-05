class Solution {
  public:
    vector<int>ans;
    void solve(Node* root, int low , int high){
        if(root == NULL){
            return;
        }
        solve(root->left,low,high);
        if(root->data >= low && root->data <= high){
            ans.push_back(root->data);
        }
        solve(root->right,low,high);
        
    }
    vector<int> printNearNodes(Node *root, int low, int high) {
        // code here
        solve(root,low,high);
        return ans;
        
    }
};