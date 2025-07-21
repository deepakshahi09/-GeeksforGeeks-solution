class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        int tc = 0;
        Node* temp = head;

        // Count total nodes
        while (temp) {
            tc++;
            temp = temp->next;
        }

        // Invalid k check
        if (k > tc || k <= 0) {
            return -1;
        }

        temp = head;
        int pos = tc - k;

        // Move to (tc - k)th node
        while (pos--) {
            temp = temp->next;
        }

        return temp->data;
    }
};
