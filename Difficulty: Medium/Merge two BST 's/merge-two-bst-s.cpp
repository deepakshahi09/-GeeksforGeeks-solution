/*
class Node {
  public:
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
    void store(Node* root, vector<int>&v){
        if(!root){
            return;
        }
        store(root->left,v);
        v.push_back(root->data);
        store(root->right,v);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // code here
        vector<int>v1,v2;
        store(root1,v1);
        store(root2,v2);
        
        int i = 0;
        int j = 0;
        vector<int>ans;
        while(i < v1.size() && j < v2.size()){
            if(v1[i] < v2[j]){
                ans.push_back(v1[i]);
                i++;
            }
            else{
                ans.push_back(v2[j]);
                j++;
            }
        }
        while(i < v1.size()){
            ans.push_back(v1[i]);
            i++;
        }
        while(j < v2.size()){
            ans.push_back(v2[j]);
            j++;
        }
        return ans;
        
    }
};