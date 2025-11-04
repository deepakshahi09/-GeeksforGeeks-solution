
/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void findPaths(Node* root, vector<int>& path, vector<vector<int>>& result) {
        if (root == NULL) return;
        
        path.push_back(root->data);
        
        // If it's a leaf node
        if (root->left == NULL && root->right == NULL) {
            result.push_back(path);
        } else {
            findPaths(root->left, path, result);
            findPaths(root->right, path, result);
        }
        
        path.pop_back(); // Backtrack
    }
    
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> result;
        vector<int> path;
        findPaths(root, path, result);
        return result;
    }
};
