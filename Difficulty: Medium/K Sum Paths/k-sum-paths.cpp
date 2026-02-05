class Solution {
  public:
    int ans = 0;

    void dfs(Node* root, int k, long long sum,
             unordered_map<long long, int>& mp) {
        if (!root) return;

        sum += root->data;

        if (mp.find(sum - k) != mp.end())
            ans += mp[sum - k];

        mp[sum]++;

        dfs(root->left, k, sum, mp);
        dfs(root->right, k, sum, mp);

        mp[sum]--; // backtrack
    }

    int countAllPaths(Node* root, int k) {
        unordered_map<long long, int> mp;
        mp[0] = 1;  // base case
        dfs(root, k, 0, mp);
        return ans;
    }
};
