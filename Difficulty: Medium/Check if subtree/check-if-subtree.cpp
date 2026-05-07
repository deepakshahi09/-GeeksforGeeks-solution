/*
Definition for Node
struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool issame(Node *a, Node *b){
        if(a==NULL && b==NULL){
            return true;
        }
        if(a==NULL || b==NULL){
            return false;
        }
        if(a->data != b->data){
            return false;
        }
        
        return issame(a->left,b->left) && issame(a->right,b->right);
    }
    bool isSubTree(Node *root1, Node *root2) {
        if(root2 == NULL){
            return true;
        }
        if(root1 == NULL){
            return false;
        }
        
        if(issame(root1,root2)){
            return true;
        }
        return isSubTree(root1->left,root2) || isSubTree(root1->right,root2);
        // code here
        
    }
};