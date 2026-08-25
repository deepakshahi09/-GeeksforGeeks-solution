/* Structure of binary tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
    private:
    void mrkparent(Node* root,unordered_map<Node*,Node*>&parent){
        if(!root){
            return;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node* node = q.front();
            q.pop();
            if(node->left){
                q.push(node->left);
                parent[node->left]=node;
            }
            if(node->right){
                q.push(node->right);
                parent[node->right]= node;
            }
        }
    }
    void solve(Node* root, Node*& tar, int t) {
        if (!root || tar != NULL) {
            return;
        }

        if (root->data == t) {
            tar = root;
            return;
        }

        solve(root->left, tar, t);
        solve(root->right, tar, t);
    }
  public:
    int minTime(Node* root, int target) {
        unordered_map<Node*,Node*>parent;
        Node* targe = NULL;
        solve(root,targe,target);
        mrkparent(root,parent);
        queue<Node*>q;
        unordered_set<Node*>visit;
        
        q.push(targe);
        visit.insert(targe);
        
        vector<int>ans;
        int c = 0;
        while(!q.empty()){
            
            int n = q.size();
            for(int i=0;i<n;i++){
                Node* node = q.front();
                q.pop();
                
                if(node->left && !visit.count(node->left)){
                    q.push(node->left);
                    visit.insert(node->left);
                }
                if(node->right && !visit.count(node->right)){
                    q.push(node->right);
                    visit.insert(node->right);
                }
                
                if(parent.count(node) && !visit.count(parent[node])){
                    visit.insert(parent[node]);
                    q.push(parent[node]);
                }
                
            }
            c++;
        }
        return c-1;
        
    }
};