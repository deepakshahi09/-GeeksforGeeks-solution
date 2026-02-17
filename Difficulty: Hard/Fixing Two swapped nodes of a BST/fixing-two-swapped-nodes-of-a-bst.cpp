// User function Template for C++

/*struct Node
{
    int data;
    struct Node *left, *right;
};*/

class Solution {
  public:
    Node* first = NULL;
    Node* second = NULL;
    Node* middle = NULL;
    Node* prev = NULL;
    void solve(Node* root){
        if(!root){
            return;
        }
        solve(root->left);
        if(prev != NULL && prev->data > root->data){
            if(first == NULL){
                first = prev;
                middle = root;
            }
            else{
                second = root;
            }
        }
        prev = root;
        solve(root->right);
    }
    struct Node *correctBST(struct Node *root) {
        solve(root);
        if(first && second){
            swap(first->data, second->data);
        }
        else if(first && middle){
            swap(first->data, middle->data);
        }
        return root;
        // code here
        
    }
};