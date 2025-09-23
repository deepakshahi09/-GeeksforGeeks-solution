class Solution {
  public:
    void removeLoop(Node* head) {
        if (!head || !head->next) return;

        Node* slow = head;
        Node* fast = head;

        // Step 1: Detect loop
        bool loopExists = false;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                loopExists = true;
                break;
            }
        }

        if (!loopExists) return; // No loop

        // Step 2: Find start of loop
        slow = head;
        if (slow == fast) {
            // Loop starts at head
            while (fast->next != slow)
                fast = fast->next;
        } else {
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
        }

        // Step 3: Remove loop
        fast->next = nullptr;
    }
};
