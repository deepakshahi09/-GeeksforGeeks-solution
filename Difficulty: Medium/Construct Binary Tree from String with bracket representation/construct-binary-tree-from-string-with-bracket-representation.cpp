class Solution {
  public:
    
    Node* solve(string &s, int &i) {
        // If empty subtree
        if (s[i] == ')') {
            return NULL;
        }
        
        // Read number
        int num = 0;
        while (i < s.size() && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
            i++;
        }
        
        Node* root = new Node(num);
        
        // Left child
        if (i < s.size() && s[i] == '(') {
            i++; // skip '('
            root->left = solve(s, i);
            i++; // skip ')'
        }
        
        // Right child
        if (i < s.size() && s[i] == '(') {
            i++; // skip '('
            root->right = solve(s, i);
            i++; // skip ')'
        }
        
        return root;
    }
    
    Node* treeFromString(string str) {
        int i = 0;
        return solve(str, i);
    }
};
