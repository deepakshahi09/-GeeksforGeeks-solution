class Solution {
public:
    // Reverse linked list
    Node* rev(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    // Compare two linked lists (assuming no leading zeros)
    // Returns true if l1 >= l2
    bool isGreaterOrEqual(Node* l1, Node* l2) {
        int n1 = 0, n2 = 0;
        Node* t1 = l1;
        Node* t2 = l2;
        while (t1) { n1++; t1 = t1->next; }
        while (t2) { n2++; t2 = t2->next; }

        if (n1 != n2) return n1 > n2;

        // If lengths equal, compare digit by digit
        t1 = l1; t2 = l2;
        while (t1 && t2) {
            if (t1->data != t2->data)
                return t1->data > t2->data;
            t1 = t1->next;
            t2 = t2->next;
        }
        return true; // equal
    }

    Node* subLinkedList(Node* l1, Node* l2) {
        // Remove leading zeros
        while (l1 && l1->data == 0) l1 = l1->next;
        while (l2 && l2->data == 0) l2 = l2->next;

        if (!l1) return new Node(0);
        if (!l2) return l1;

        // Ensure l1 >= l2
        if (!isGreaterOrEqual(l1, l2)) swap(l1, l2);

        // Reverse both
        l1 = rev(l1);
        l2 = rev(l2);

        Node* dummy = new Node(-1);
        Node* curr = dummy;

        Node* p1 = l1;
        Node* p2 = l2;
        int borrow = 0;

        while (p1) {
            int x = p1->data - borrow;
            int y = (p2 ? p2->data : 0);

            if (x < y) {
                x += 10;
                borrow = 1;
            } else {
                borrow = 0;
            }

            int diff = x - y;
            curr->next = new Node(diff);
            curr = curr->next;

            p1 = p1->next;
            if (p2) p2 = p2->next;
        }

        // Reverse back result
        Node* ans = rev(dummy->next);

        // Remove leading zeros
        while (ans && ans->data == 0 && ans->next) ans = ans->next;

        return ans;
    }
};
