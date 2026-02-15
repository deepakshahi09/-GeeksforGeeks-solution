// User function Template for C++

/*struct Node {
    int data;
    Node *left, *right;
};*/

class Solution {
  public:
    void inorder(Node* root, vector<int>&v){
        if(!root){
            return;
        }
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    void build(Node* root,vector<int>&v,int&i){
        if(!root){
            return;
        }
        build(root->left,v,i);
        build(root->right,v,i);
        root->data = v[i];
        i++;
        
    }
    void convertToMaxHeapUtil(Node* root) {
        vector<int>v;
        inorder(root,v);
        int i =0;
        build(root,v,i);
        // Your code goes here
    }
};
