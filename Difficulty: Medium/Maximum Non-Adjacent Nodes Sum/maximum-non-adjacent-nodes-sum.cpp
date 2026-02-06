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
    vector<int>getsum(Node* root){
        if(!root){
            return {0,0};
        }
        vector<int>resleft = getsum(root->left);
        vector<int>resright = getsum(root->right);
        
        int include = root->data + resleft[1] + resright[1];
        int exclude = max(resleft[0],resleft[1]) + max(resright[0],resright[1]);
        return {include,exclude};
    }
    int getMaxSum(Node *root) {
        vector<int>ans = getsum(root);
        return max(ans[0],ans[1]);
        // code here
        
    }
};