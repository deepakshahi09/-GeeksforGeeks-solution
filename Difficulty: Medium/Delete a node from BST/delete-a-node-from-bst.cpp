/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    Node* getsucessor(Node* root){
        root = root->right;
        while(root && root->left){
            root= root->left;
        }
        return root;
    }
    Node* delNode(Node* root, int x) {
        if(root == NULL){
            return root;
        }
        if(root->data > x){
            root->left = delNode(root->left, x);
        }
        else if(root->data < x){
            root->right = delNode(root->right,x);
        }
        else{
            if(root->left == NULL){
                Node* tem = root->right;
                delete root;
                return tem;
            }
            if(root->right == NULL){
                Node* temp = root->left;
                delete root;
                return temp;
            }
            Node* cu = getsucessor(root);
            root->data = cu->data;
            root->right = delNode(root->right,cu->data);
        }
        return root;
        // code here
        
    }
};