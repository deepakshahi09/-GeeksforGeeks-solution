/*
Node is as follows
class Node {
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
    void solve(Node* root,vector<int>&ans){
        if(!root){
            return;
        }
        solve(root->left,ans);
        ans.push_back(root->data);
        solve(root->right,ans);
        
    }
    bool findTarget(Node *root, int target) {
        vector<int>v;
        solve(root,v);
        int i = 0;
        int j = v.size()-1;
        while(i<j){
            int sum = v[i]+v[j];
            if(sum == target){
                return true;
            }
            else if(sum  < target){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
        
        // your code here.
    }
};