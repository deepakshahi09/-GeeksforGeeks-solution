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
    int floor(Node* root, int x) {
        // code here
        int floor = -1;
        while(root){
            if(root->data == x){
                return root->data;
            }
            if(root->data > x){
                root = root->left;
            }
            else{
                floor = root->data;
                root = root->right;
            }
        }
        return floor;
    }
};