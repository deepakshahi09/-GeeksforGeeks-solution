class Solution {
  public:
  unordered_map<string , int>mp;
  vector<Node*>ans;
  string solve(Node* root){
      if(!root){
          return "#";
      }
      string left = solve(root->left);
      string right = solve(root->right);
      
      string s = to_string(root->data) + "," + left + "," + right;
      if(mp[s] == 1){
          ans.push_back(root);
      }
      mp[s]++;
      return s;
  }
    vector<Node*> printAllDups(Node* root) {
        ans.clear();
        mp.clear();
        solve(root);
        return ans;
        // Code here
        
    }
};