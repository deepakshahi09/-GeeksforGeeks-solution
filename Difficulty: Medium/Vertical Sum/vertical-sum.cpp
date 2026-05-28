/* Structure of binary tree node
class Node{
public:
    int data;
    Node* left, right;
    Node(int item)
    {
        data = item;
        left = nullptr;
        right = nullptr;
    }
}
*/
class Solution {
  public:
    vector<int> verticalSum(Node* root) {
        // code here
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            Node* curr = q.front().first;
            int idx = q.front().second;
            q.pop();
            if(mp.find(idx) == mp.end()){
                mp[idx] = curr->data;
            }
            else{
                mp[idx] = mp[idx] + curr->data;
            }
            if(curr->left){
                q.push({curr->left,idx - 1});
            }
            if(curr->right){
                q.push({curr->right,idx+1});
            }
        }
        vector<int>ans;
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};