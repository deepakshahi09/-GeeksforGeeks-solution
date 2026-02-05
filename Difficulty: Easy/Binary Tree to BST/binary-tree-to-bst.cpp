/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void store(Node *root, vector<int>&v){
        if(root == NULL){
            return;
        }
        store(root->left,v);
        v.push_back(root->data);
       
        store(root->right,v);
    }
    void replace(Node* root,vector<int>&v, int &idx){
        if(root == NULL) return;
        replace(root->left,v,idx);
        root->data = v[idx++];
        replace(root->right,v,idx);        
    }
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    Node *binaryTreeToBST(Node *root) {
        vector<int>v;
        store(root,v);
        sort(v.begin(),v.end());
        int idx = 0;
        replace(root,v,idx);
        return root;
        // Your code goes here
    }
};