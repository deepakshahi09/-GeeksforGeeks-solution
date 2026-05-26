class Solution {
public:
    int minToggle(vector<int>& arr) {

        int n = arr.size();

        int ans = n;

        for(int p = 0; p <= n; p++) {

            int c = 0;

            // left side should be 0
            for(int i = 0; i < p; i++) {
                if(arr[i] == 1) {
                    c++;
                }
            }

            // right side should be 1
            for(int i = p; i < n; i++) {
                if(arr[i] == 0) {
                    c++;
                }
            }

            ans = min(ans, c);
        }

        return ans;
    }
};