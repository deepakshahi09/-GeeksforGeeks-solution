/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    Node* solve(int arr[], int st, int lst){
        if(st > lst){
            return NULL;
        }
        int mid = (st+lst)/2;
        Node* root = new Node(arr[mid]);
        root->left = solve(arr,st,mid-1);
        root->right = solve(arr,mid+1,lst);
        return root;
    }
    Node* sortedArrayToBST(vector<int>& arr) {
        return solve(arr.data(),0,arr.size()-1);
        // code here
        
    }
};