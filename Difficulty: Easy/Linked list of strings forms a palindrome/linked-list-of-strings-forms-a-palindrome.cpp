class Solution {
  public:
    bool compute(Node* head) {
        string s = "";

        // Step 1: Concatenate all strings
        while (head != NULL) {
            s += head->data;
            head = head->next;
        }

        // Step 2: Palindrome check
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
};
