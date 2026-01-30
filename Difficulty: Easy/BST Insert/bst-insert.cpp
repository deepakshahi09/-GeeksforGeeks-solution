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
    Node* insert(Node* root, int key) {
        Node* newNode = new Node(key);
        if(!root){
            return newNode;
        }
        if(root->data > key){
            root->left = insert(root->left,key);
        }
        else{
            root->right = insert(root->right, key);
        }
        return root;
        //  code  here
    }
};