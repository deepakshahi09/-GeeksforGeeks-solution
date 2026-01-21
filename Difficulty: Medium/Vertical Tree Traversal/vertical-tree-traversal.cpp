/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        // code here
        vector<vector<int>>ans;
        if(root == NULL){
            return ans;
        }
        map<int,vector<int>>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        
        while(!q.empty()){
            Node* front = q.front().first;
            int hd = q.front().second;
            q.pop();
            
            mp[hd].push_back(front->data);
            if(front->left){
                q.push({front->left,hd-1});
            }
            if(front->right){
                q.push({front->right,hd+1});
            }
        }
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};