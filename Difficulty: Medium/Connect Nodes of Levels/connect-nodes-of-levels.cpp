/*
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node* nextRight;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
        nextRight = nullptr;
    }
};

*/

class Solution {
  public:
    Node* connect(Node* root) {
        // code here
        if(!root){
            return NULL;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node* prev = NULL;
            int s = q.size();
            for(int i=0;i<s;i++){
                Node* curr = q.front();
                q.pop();
                
                if(prev != NULL){
                    prev->nextRight = curr;
                }
                prev = curr;
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            prev->nextRight = NULL;
        }
        
        return root;
    }
};