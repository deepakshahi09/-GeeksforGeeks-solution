// User function Template for C++

class Solution {
  public:
    vector<int> largestValues(Node* root) {
        // code here
        
        vector<int>ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int ma = INT_MIN;
            int n = q.size();
            for(int i= 0;i<n;i++){
                Node* front = q.front();
                q.pop();
                ma = max(ma,front->data);
                if(front->left){
                    q.push(front->left);
                 
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            ans.push_back(ma);
        }
        return ans;
    }
};