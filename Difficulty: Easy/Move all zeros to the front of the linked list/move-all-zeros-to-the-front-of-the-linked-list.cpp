class Solution {
  public:
    void moveZeroes(struct Node*& head) {

        if (head == NULL) return;

        // Dummy heads for zero and non-zero lists
        Node* zeroDummy = new Node(-1);
        Node* nonZeroDummy = new Node(-1);

        Node* zeroTail = zeroDummy;
        Node* nonZeroTail = nonZeroDummy;

        Node* curr = head;

        // Separate nodes into two lists
        while (curr != NULL) {
            if (curr->data == 0) {
                zeroTail->next = curr;
                zeroTail = zeroTail->next;
            } else {
                nonZeroTail->next = curr;
                nonZeroTail = nonZeroTail->next;
            }
            curr = curr->next;
        }

        // Important: end non-zero list
        nonZeroTail->next = NULL;

        // Join zero list with non-zero list
        zeroTail->next = nonZeroDummy->next;

        // Update head
        head = zeroDummy->next;
    }
};
