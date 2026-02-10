class Solution {
public:
    Node* merge(Node* h1, Node* h2) {
        if (!h1) return h2;
        if (!h2) return h1;

        if (h1->data <= h2->data) {
            h1->next = merge(h1->next, h2);
            return h1;
        } else {
            h2->next = merge(h1, h2->next);
            return h2;
        }
    }

    Node* getmid(Node* head) {
        Node* slow = head;
        Node* fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node* mergeSort(Node* head) {
        if (!head || !head->next)
            return head;

        Node* mid = getmid(head);
        Node* right = mid->next;
        mid->next = NULL;   // 🔥 important split

        Node* left = mergeSort(head);
        right = mergeSort(right);

        return merge(left, right);
    }
};
