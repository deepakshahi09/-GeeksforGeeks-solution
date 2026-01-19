// User function Template for C++

/*// A Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};*/

class Solution {
  public:
  

    /*You are required to complete below function */
    int kthCommonAncestor(Node *root, int k, int x, int y) {
        vector<int>path;
        Node* curr = root;
        while(curr){
            path.push_back(curr->data);
            if(x < curr->data && y< curr->data){
                curr = curr->left;
            }
            else if(x > curr->data && y > curr->data){
                curr = curr->right;
            }
            else{
                break;
            }
        }
        int idx = path.size()-k;
        if(idx < 0){
            return -1;
        }
        return path[idx];
        // your code goes here
    }
};
