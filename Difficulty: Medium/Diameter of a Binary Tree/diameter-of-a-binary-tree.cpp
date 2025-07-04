/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
    int di = 0;
  public:
  int height(Node* root){
      if(root==NULL){
          return 0;
      }
      int leftheight = height(root->left);
      int rightheight = height(root->right);
      
      di = max(di,leftheight+rightheight);
      return 1+max(leftheight,rightheight);
  }
  
  
    int diameter(Node* root) {
        
        height(root);
        return di;
        // Your code here
        
    }
};