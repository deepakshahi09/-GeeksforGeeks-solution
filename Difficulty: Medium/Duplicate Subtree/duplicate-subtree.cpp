class Solution {
  public:
    unordered_map<string, int> mp;
    
    string solve(Node* root, bool &ans) {
        if (root == NULL) return "#";
        
        string left = solve(root->left, ans);
        string right = solve(root->right, ans);
        
        string s = to_string(root->data) + "," + left + "," + right;
        
        // Only consider subtrees of size >= 2 (non-leaf)
        if (root->left != NULL || root->right != NULL) {
            mp[s]++;
            if (mp[s] == 2) {
                ans = true;
            }
        }
        
        return s;
    }
    
    int dupSub(Node *root) {
        bool ans = false;
        mp.clear();          // VERY important for multiple test cases
        solve(root, ans);
        return ans ? 1 : 0;
    }
};
