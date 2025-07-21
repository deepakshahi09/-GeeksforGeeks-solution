class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        if (head == NULL || k == 0) return head;

        if (k == 1) {
            // If k == 1, delete all nodes
            while (head != NULL) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
            return NULL;
        }

        Node* curr = head;
        Node* prev = NULL;
        int count = 1;

        while (curr != NULL) {
            if (count % k == 0) {
                // Delete current node
                Node* temp = curr;
                prev->next = curr->next;
                curr = curr->next;
                delete temp;
            } else {
                prev = curr;
                curr = curr->next;
            }
            count++;
        }

        return head;
    }
};
