// User function template in C++

/*

typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;


// A utility function to create a new tree node
Node* newNode( int data )
{
    Node* temp = (Node *)malloc( sizeof( Node ) );
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

*/

class Solution {
  public:
    int idx = 0;
    Node* solve(int arr[], int n, int mini, int maxi){
        if(idx >= n){
            return NULL;
        }
        int val = arr[idx];
        if(val > maxi || val < mini){
            return NULL;
        }
        Node* root = newNode(val);
        idx++;
        
        root->left = solve(arr,n,mini,val);
        root->right = solve(arr,n,val,maxi);
        return root;
    }
    // Function that constructs BST from its preorder traversal.
    Node* Bst(int pre[], int size) {
        return solve(pre,size,INT_MIN,INT_MAX);
        // code here
        
    }
};