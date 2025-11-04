class Solution {
public:
    int count(int N) {
        // Base cases
        if (N == 0 || N == 2)
            return 1;

        int ans = 0;

        // Recursive relation: sum of combinations of subproblems
        for (int i = 0; i <= N - 2; i += 2) {
            ans += count(i) * count(N - 2 - i);
        }

        return ans;
    }
};
