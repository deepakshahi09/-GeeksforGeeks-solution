/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
    private:
    void mrkparent(Node* root,unordered_map<Node*,Node*>&parent){
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node* nod = q.front();
            q.pop();
            if(nod->left){
                parent[nod->left] = nod;
                q.push(nod->left);
            }
            if(nod->right){
                parent[nod->right] = nod;
                q.push(nod->right);
            }
        }
    }
    void solve(Node* root,int target,Node* &tar){
        if (!root || tar != NULL)
            return;

        if (root->data == target) {
            tar = root;
            return;
        }

        solve(root->left, target, tar);
        solve(root->right, target, tar);
    }
  public:
    vector<int> kDistanceNodes(Node* root, int target, int k) {
        Node* tar = NULL;
        solve(root,target,tar);
        unordered_map<Node*,Node*>parent;
        mrkparent(root,parent);
        queue<Node*>q;
        unordered_set<Node*>visit;
        int dist = 0;
        vector<int>ans;
        q.push(tar);
        visit.insert(tar);
        while(!q.empty()){
            if(k == dist){
                while(!q.empty()){
                    ans.push_back(q.front()->data);
                    q.pop();
                }
                sort(ans.begin(),ans.end());
                return ans;
            }
            int n = q.size();
            for(int i=0;i<n;i++){
                Node* nod = q.front();
                q.pop();
                if(nod->left && !visit.count(nod->left)){
                    visit.insert(nod->left);
                    q.push(nod->left);
                }
                if(nod->right && !visit.count(nod->right)){
                    visit.insert(nod->right);
                    q.push(nod->right);
                }
                
                if(parent.count(nod) && !visit.count(parent[nod])){
                    visit.insert(parent[nod]);
                    q.push(parent[nod]);
                }
            }
            dist++;
            
        }
        return ans;
        
    }
};