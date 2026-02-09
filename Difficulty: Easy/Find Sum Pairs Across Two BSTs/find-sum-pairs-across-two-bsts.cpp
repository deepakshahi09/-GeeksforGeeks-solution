/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void inorder(Node* root, vector<int>&v){
        if(!root){
            return;
        }
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    void revinorder(Node* root, vector<int>&v){
        if(!root){
            return;
        }
        revinorder(root->right,v);
        v.push_back(root->data);
        revinorder(root->left,v);
    }
    
    int countPairs(Node* root1, Node* root2, int x) {\
        vector<int>a,b;
        inorder(root1,a);
        revinorder(root2,b);
        
        int i = 0;
        int j = 0;
        int cnt = 0;
        while(i<a.size() && j<b.size()){
            int sum = a[i] + b[j];
            if(sum == x){
                cnt++;
                i++;
                j++;
            }
            else if(sum < x){
                i++;
            }
            else{
                j++;
            }
        }
        return cnt;
        
        // code here
        
    }
};