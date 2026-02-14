// Function to check if any pair exists in BST whose sum is equal to given value.
void solve(Node* root,vector<int>&ans){
        if(!root){
            return;
        }
        solve(root->left,ans);
        ans.push_back(root->data);
        solve(root->right,ans);
        
    }
bool findPair(Node* root, int X) {
    // Your code here
    vector<int>v;
        solve(root,v);
        int i = 0;
        int j = v.size()-1;
        while(i<j){
            int sum = v[i]+v[j];
            if(sum == X){
                return true;
            }
            else if(sum  < X){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    
}
