/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    // function should print the nodes at k distance from root
    vector<int> Kdistance(Node *root, int k) {
        // Your code here
        vector<int>ans;
        if(root == NULL){
            return ans;
        }
        queue<Node*>q;
        int lev = 0;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i=0;i<n;i++){
                Node*front = q.front();
                q.pop();
                if(lev == k){
                    ans.push_back(front->data);
                }
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            if(lev == k){
                break;
            }
            lev++;
        }
        return ans;
    }
};