/*
Structure of the binary Search Tree is as
struct node
{
    int key;
    struct node *left, *right;
};
*/
// your task is to complete the Function
// Function is used to change a key value in the given BST
// Note: Function should return root node to the new modified BST
node *findmin(node* root){
    while(root->left){
        root = root->left;
    }
    return root;
}
node* del(node* root, int key){
    if(!root){
        return NULL;
    }
    if(key < root->key){
        root->left = del(root->left, key);
    }
    else if(key > root->key){
        root->right = del(root->right, key);
    }
    else{
        if(!root->left){
            return root->right;
        }
        else if(!root->right){
            return root->left;
        }
        node* temp=findmin(root->right);
        root->key = temp->key;
        root->right = del(root->right,temp->key);
    }
    return root;
}
node* insert(node* root, int key){
    if(!root){
        return new node(key);
    }
    if(key < root->key){
        root->left = insert(root->left, key);
    }
    else{
        root->right = insert(root->right, key);
    }
    return root;
}
struct node *changeKey(struct node *root, int oldVal, int newVal) {
    root = del(root,oldVal);
    root = insert(root, newVal);
    return root;
    // Code here
    
}