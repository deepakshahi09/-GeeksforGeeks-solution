/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    int solve(Node* root, int x, int &count){
        if(root == NULL){
            return 0;
        }
        int leftSum = solve(root->left,x,count);
        int rightSum = solve(root->right,x,count);
        
        int totalsum = leftSum+rightSum+root->data;
        if(totalsum == x){
            count++;
        }
        return totalsum;
    }
    int countSubtrees(Node* root, int x) {
        int count = 0;
        solve(root,x,count);
        return count;
        // code here
        
    }
};