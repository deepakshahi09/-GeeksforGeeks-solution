/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    struct Info{
        bool isbst;
        int size;
        int minval;
        int maxval;
    };
    Info solve(Node* curr){
        if(curr == NULL){
            return {true,0,INT_MAX,INT_MIN};
        }
        Info left = solve(curr->left);
        Info right = solve(curr->right);
        
        Info ans;
        if(left.isbst && right.isbst && left.maxval < curr->data && curr->data < right.minval){
            ans.isbst = true;
            ans.size = left.size + right.size+1;
            ans.minval = min(curr->data,left.minval);
            ans.maxval = max(curr->data,right.maxval);
        }
        else{
            ans.isbst = false;
            ans.minval = INT_MIN;
            ans.maxval = INT_MAX;
            ans.size = max(left.size,right.size);
        }
        return ans;
    }
    int largestBst(Node *root) {
        return solve(root).size;
        
        // Your code here
        
    }
};