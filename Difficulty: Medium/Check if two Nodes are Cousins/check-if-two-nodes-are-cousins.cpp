/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    bool parent(Node* root, int a, int b){
        if(!root){
            return false;
        }
        if(root->left && root->right){
            if((root->left->data == a && root->right->data == b ) || 
                (root->left->data == b && root->right->data == a)){
                return true;
            }
        }
        return parent(root->left, a, b) || parent(root->right,a,b);
    }
    // Function to check if two nodes are cousins in a tree
    bool isCousins(Node* root, int a, int b) {
        if(root == NULL){
            return false;
        }
       
        if(a==b){
            return false;
        }
        queue<Node*>q;
        q.push(root);
        int l1 = -1;
        int l2 = -1;
        int level =0;
        while(!q.empty()){
            int n = q.size();
            while(n--){
                Node* front=q.front();
                q.pop();
                if(front->data == a){
                    l1 = level;
                }
                if(front->data == b){
                    l2 = level;
                }
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            if(l1 != -1 && l2 != -1)
                break;
            level++;
        }
        if(l1 == -1 || l2 == -1){
            return false;
        }
        if(l1 != l2){
            return false;
        }
        return !parent(root,a,b);
        // write code here
        
    }
};