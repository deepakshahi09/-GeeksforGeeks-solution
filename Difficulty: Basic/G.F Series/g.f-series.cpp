// User function Template for C++
class Solution {
  public:
    void helper(long long a, long long b, int n) {
        if (n == 2)
            return;
        
        long long c = (a * a) - b;
        cout << " " << c;
        helper(b, c, n - 1);
    }

    void gfSeries(int n) {
        cout << "0 1";
        helper(0, 1, n);
        cout << "\n";  // ✅ newline after every test case
    }
};
