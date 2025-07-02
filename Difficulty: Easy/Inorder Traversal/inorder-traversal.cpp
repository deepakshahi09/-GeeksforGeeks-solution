/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        vector<int>ans;
        inordertr(root,ans);
        return ans;
        
        // Your code here
        
    }
    private:
    void inordertr(Node* node,vector<int>& result){
        if(node==NULL) return;
        inordertr(node->left,result);
        result.push_back(node->data);
        inordertr(node->right,result);
        
    }
};