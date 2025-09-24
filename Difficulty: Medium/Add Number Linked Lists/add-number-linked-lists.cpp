class Solution {
  public:
    // Reverse a linked list
    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        while(curr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    // Function to remove leading zeros
    Node* removeLeadingZeros(Node* head) {
        while(head && head->data == 0) {
            head = head->next;
        }
        // If all zeros, keep one node with 0
        return head ? head : new Node(0);
    }
    
    Node* addTwoLists(Node* head1, Node* head2) {
        // Step 1: Remove leading zeros
        head1 = removeLeadingZeros(head1);
        head2 = removeLeadingZeros(head2);
        
        // Step 2: Reverse both lists
        head1 = reverse(head1);
        head2 = reverse(head2);
        
        // Step 3: Add numbers
        int carry = 0;
        Node* dummy = new Node(0);
        Node* temp = dummy;
        
        while(head1 || head2 || carry) {
            int sum = carry;
            if(head1) {
                sum += head1->data;
                head1 = head1->next;
            }
            if(head2) {
                sum += head2->data;
                head2 = head2->next;
            }
            carry = sum / 10;
            temp->next = new Node(sum % 10);
            temp = temp->next;
        }
        
        // Step 4: Reverse the result
        Node* result = reverse(dummy->next);
        
        // Step 5: Remove leading zeros from result (in case sum = 0)
        result = removeLeadingZeros(result);
        
        return result;
    }
};
