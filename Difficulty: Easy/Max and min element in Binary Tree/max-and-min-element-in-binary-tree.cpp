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
    int findMax(Node *root) {
        // code here
        if(root == NULL){
            return INT_MIN;
        }
        int res = root->data;
        int lres = findMax(root->left);
        int rles = findMax(root->right);
        
        if(lres > res){
            res = lres;
        }
        if(rles > res){
            res = rles;
        }
        return res;
    }

    int findMin(Node *root) {
        if(root == NULL){
            return INT_MAX;
        }
        int s = root->data;
        int r = findMin(root->left);
        int l = findMin(root->right);
        
        if(s > r){
            s = r;
        }
        if(s > l){
           s = l; 
        }
        return s;
        // code here
    }
};