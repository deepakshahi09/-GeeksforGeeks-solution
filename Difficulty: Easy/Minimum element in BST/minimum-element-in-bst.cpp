/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    int minValue(Node* root) {
        // code here
        if(root == NULL){
            return INT_MAX;
        }
        int min = root->data;
        int lmin = minValue(root->left);
        int rmin = minValue(root->right);
        if(min > lmin){
            min = lmin;
        }
        if(min > rmin){
            min = rmin;
        }
        return min;
    }
};