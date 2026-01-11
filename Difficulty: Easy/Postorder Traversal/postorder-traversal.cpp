// User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
class Solution {
  public:
    // Function to return a list containing the postorder traversal of the tree.
    vector<int> postOrder(Node* root) {
        vector<int> ans;
        postorder(root,ans);
        return ans;
        // Your code here
    }
    private:
    
    void postorder(Node* root, vector<int>& ans){
        if(root==NULL){
            return;
        }
        postorder(root->left,ans);
        postorder(root->right,ans);
        ans.push_back(root->data);
    }
};
