/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int preIndex = 0;
    Node* solve(vector<int>&inorder, vector<int>&preorder,int st, int lst){
        if(st > lst){
            return NULL;
        }
        Node* root = new Node(preorder[preIndex++]);
        int pos;
        for(int i = st;i<=lst;i++){
            if(inorder[i] == root->data){
                pos = i;
                break;
            }
        }
        root->left = solve(inorder,preorder,st,pos-1);
        root->right = solve(inorder,preorder,pos+1,lst);
        return root;
    }
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        preIndex = 0;
        solve(inorder,preorder,0,inorder.size()-1);
        // code here
        
    }
};