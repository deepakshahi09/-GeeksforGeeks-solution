/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> nodesAtOddLevels(Node *root) {
        // code here
        int lvl = 1;
        vector<int>ans;
        if(!root){
            return ans;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i=0;i<n;i++){
                Node* front = q.front();
                q.pop();
                if(lvl % 2 != 0){
                    ans.push_back(front->data);
                }
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
                
            }
            lvl++;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};