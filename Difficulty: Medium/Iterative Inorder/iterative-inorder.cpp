class Solution {
  public:
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        stack<Node*> st;
        Node* curr = root;
        
        while (curr != NULL || !st.empty()) {
            
            // Reach the leftmost node
            while (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }
            
            // Visit node
            curr = st.top();
            st.pop();
            ans.push_back(curr->data);
            
            // Go to right subtree
            curr = curr->right;
        }
        
        return ans;
    }
};
