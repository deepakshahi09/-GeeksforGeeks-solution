class Solution {
  public:
    int findCeil(Node* root, int x) {
        // code here
        int cel = -1;
        while(root){
            if(root->data == x){
                return root->data;
            }
            if(root->data < x){
                root = root->right;
            }
            else{
                cel = root->data;
                root = root->left;
            }
        }
        return cel;
    }
};
