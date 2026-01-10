/*  Structure of a Binary Tree

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    int maxWidth(Node* root) {
        // code here
        queue<Node*>q;
        if(root == NULL){
            return 0;
        }
        q.push(root);
        int ans = INT_MIN;
        while(!q.empty()){
            int n = q.size();
            ans = max(n,ans);
            for(int i=0;i<n;i++){
                Node* front = q.front();
                q.pop();
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            
        }
        return ans;
    }
};