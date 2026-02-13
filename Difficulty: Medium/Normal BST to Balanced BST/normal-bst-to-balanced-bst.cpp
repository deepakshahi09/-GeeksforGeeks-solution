/*Structure of the Node of the BST is as
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
    void solve(Node* root,vector<int>&ans){
        if(!root){
            return;
        }
        solve(root->left,ans);
        ans.push_back(root->data);
        solve(root->right,ans);
    }
    Node* buldbst(vector<int>&ans,int st,int lst){
        if(st > lst){
            return NULL;
        }
        int mid= st+(lst-st)/2;
        Node* root = new Node(ans[mid]);
        root->left = buldbst(ans,st,mid-1);
        root->right = buldbst(ans,mid+1,lst);
        return root;
        
    }
    Node* balanceBST(Node* root) {
        vector<int>ans;
        solve(root,ans);
        return buldbst(ans,0,ans.size()-1);
        // Code here
        
    }
};