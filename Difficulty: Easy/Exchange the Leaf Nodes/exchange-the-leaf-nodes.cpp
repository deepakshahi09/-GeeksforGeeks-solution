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
    void allLeaf(Node* root, vector<Node*>&leav){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            leav.push_back(root);
        }
        allLeaf(root->left,leav);
        allLeaf(root->right,leav);
    }
    void pairwiseSwap(Node *root) {
        vector<Node*>leaf;
        allLeaf(root,leaf);
        
        for(int i=0;i+1<leaf.size();i+=2){
            int temp = leaf[i]->data;
            leaf[i]->data = leaf[i+1]->data;
            leaf[i+1]->data = temp;
        }
        // code here
        
    }
};