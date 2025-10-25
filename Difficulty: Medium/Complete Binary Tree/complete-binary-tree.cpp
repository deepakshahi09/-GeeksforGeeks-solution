class Solution {
  public:
    bool isCompleteBT(Node* root) {
        // code here
        if(!root){
            return true;
        }
        queue<Node*>q;
        bool flag = false;
        q.push(root);
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            
            if(curr == NULL){
                flag = true;
            }
            else{
                if(flag == true){
                    return false;
                }
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return true;
    }
};