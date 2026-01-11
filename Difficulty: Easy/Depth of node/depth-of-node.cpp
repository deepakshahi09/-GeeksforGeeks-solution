/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int ans= 0;
    void dfs(Node* root, int level){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            if(level % 2 == 1){
                ans = max(ans,level);
            }
        }
        dfs(root->right, level+1);
        dfs(root->left,level+1);
        
    }
    int depthOfOddLeaf(Node *root) {
        dfs(root,1);
        return ans;
        
        // code here
        
    }
};