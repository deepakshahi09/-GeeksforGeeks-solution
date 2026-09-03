class Solution {
public:
    bool pairWiseConsecutive(stack<int>& st) {

        // Make a copy so original stack remains unchanged
        stack<int> temp = st;

        // If size is odd, ignore the top element
        if (temp.size() % 2 == 1) {
            temp.pop();
        }

        // Check pairs
        while (!temp.empty()) {
            int a = temp.top();
            temp.pop();

            int b = temp.top();
            temp.pop();

            if (abs(a - b) != 1) {
                return false;
            }
        }

        return true;
    }
};