/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  int postindex;
    Node* solve(vector<int> &inorder, vector<int> &postorder, int st, int lst){
        if(st > lst){
            return NULL;
        }
        Node* root = new Node(postorder[postindex--]);
        
        int pos;
        for(int i = st;i<=lst;i++){
            if(inorder[i] == root->data){
                pos = i;
                break;
            }
        }
        
        root->right = solve(inorder,postorder,pos+1,lst);
        root->left = solve(inorder,postorder,st,pos-1);
        
        
        return root;
        
        
    }
    Node *buildTree(vector<int> &inorder, vector<int> &postorder) {
        postindex = postorder.size()-1;
        return solve(inorder,postorder,0,inorder.size()-1);
        
        // code here
        
    }
};