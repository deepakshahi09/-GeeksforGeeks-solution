/*
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
class Solution {
  public:
    vector<int> reverseLevelOrder(Node *root) {
        // code here
        vector<int>ans;
        queue<Node*>q;
        stack<int>st;
        q.push(root);
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            
            st.push(curr->data);
            
            //Important first-> add right the left
            if(curr->right){
                q.push(curr->right);
            }
            if(curr->left){
                q.push(curr->left);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};