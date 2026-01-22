// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
// class Solution {
//   public:
//     vector<int> inOrder(Node* root) {
        // code here
        // stack<Node*>st;
        // stack<bool>visit;
        // vector<int>ans;
        // st.push(root);
        // visit.push(0);
        // while(!st.empty()){
        //     Node* temp = st.top();
        //     st.pop();
        //     bool flag = visit.top();
        //     visit.pop();
            
        //     if(flag == 0){
        //         if(temp->right){
        //             st.push(temp->right);
        //             visit.push(0);
        //         }
        //         st.push(temp);
        //         visit.push(1);
        //         if(temp->left){
        //             st.push(temp->left);
        //             visit.push(0);
        //         }
        //     }
        //     else{
        //         ans.push_back(temp->data);
        //     }
        // }
        // return ans;
        
        
        
        class Solution {
public:
    vector<int> inOrder(Node* root) {
        vector<int> ans;

        while (root != NULL) {

            // Case 1: Left child does not exist
            if (root->left == NULL) {
                ans.push_back(root->data);
                root = root->right;
            }
            // Case 2: Left child exists
            else {
                Node* curr = root->left;

                // Find inorder predecessor
                while (curr->right != NULL && curr->right != root) {
                    curr = curr->right;
                }

                // Left subtree not traversed
                if (curr->right == NULL) {
                    curr->right = root;     // make temporary link
                    root = root->left;
                }
                // Left subtree already traversed
                else {
                    curr->right = NULL;     // remove link
                    ans.push_back(root->data);
                    root = root->right;
                }
            }
        }
        return ans;
    }
};
//     }
// };