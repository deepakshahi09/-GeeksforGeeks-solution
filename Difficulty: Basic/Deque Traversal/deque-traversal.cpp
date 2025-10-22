class Solution {
  public:
    void printDeque(deque<int> &dq) {
        for (int x : dq) {
            cout << x << " ";
        }
        cout << endl; // newline after printing all elements
    }
};
