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
        Node * newnode = new Node(key);
        if(!root){
            return newnode;
        }
        Node* curr = root;
        while(curr){
            if(curr->data < key && curr->right){
                curr = curr->right;
            }
            else if(curr->data > key && curr->left){
                curr = curr->left;
            }
            else{
                break;
            }
        }
        if(curr->data < key){
            curr->right = newnode;
            
        }
        else{
            curr->left = newnode;
        }
        return root;
        //  code  here
    }
};