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
    int solve(Node* root, int &count, int x){
        if(root == NULL){
            return 0;
        }
        int left = solve(root->left,count,x);
        int right = solve(root->right,count,x);
        int total = left+right+root->data;
        if(total == x){
            count++;
        }
        return total;
    }
    int countSubtrees(Node* root, int x) {
        int count = 0;
        solve(root,count,x);
        return count;
        // code here
        
    }
};