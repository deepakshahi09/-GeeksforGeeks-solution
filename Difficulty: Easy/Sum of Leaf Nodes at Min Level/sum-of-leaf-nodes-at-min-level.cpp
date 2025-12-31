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
    int minLeafSum(Node *root) {
        // code here
        if(root == NULL){
            return 0;
        
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            int sum = 0;
            bool fountleaf = false;
            for(int i=0;i<n;i++){
                Node* curr = q.front();
                q.pop();
                if(curr->left == NULL && curr->right == NULL){
                    fountleaf = true;
                    sum+=curr->data;
                }
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            if(fountleaf){
                return sum;
            }
        }
        return 0;
    }
};