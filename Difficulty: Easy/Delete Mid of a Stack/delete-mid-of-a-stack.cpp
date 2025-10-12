class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        stack<int> temp;
        int n = s.size();
        int mid = n / 2; // 0-based index from top

        // Step 1: Move top (n - mid - 1) elements into temp until we reach mid
        for (int i = 0; i < mid; i++) {
            temp.push(s.top());
            s.pop();
        }

        // Step 2: Pop the middle element
        s.pop();

        // Step 3: Push elements back from temp into original stack
        while (!temp.empty()) {
            s.push(temp.top());
            temp.pop();
        }
    }
};
