/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    int leafSum(Node* root) {
        // code here
        int sum = 0;
        queue<Node*>q;
        if(root == NULL){
            return 0;
        }
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i = 0;i<n;i++){
                Node* front = q.front();
                q.pop();
                if(front->left == NULL && front->right == NULL){
                    sum+=front->data;
                }
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
        }
        return sum;
    }
};