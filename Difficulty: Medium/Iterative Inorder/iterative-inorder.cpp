// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        stack<Node*>st;
        stack<bool>visit;
        vector<int>ans;
        st.push(root);
        visit.push(0);
        while(!st.empty()){
            Node* temp = st.top();
            st.pop();
            bool flag = visit.top();
            visit.pop();
            
            if(flag == 0){
                if(temp->right){
                    st.push(temp->right);
                    visit.push(0);
                }
                st.push(temp);
                visit.push(1);
                if(temp->left){
                    st.push(temp->left);
                    visit.push(0);
                }
            }
            else{
                ans.push_back(temp->data);
            }
        }
        return ans;
    }
};