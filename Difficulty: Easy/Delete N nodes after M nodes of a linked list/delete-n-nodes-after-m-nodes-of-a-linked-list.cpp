class Solution {
  public:
    Node* linkdelete(Node* head, int n, int m) {
        Node* curr = head;
        Node* temp;
        
        while (curr) {
            // Step 1: Skip m-1 nodes
            for (int i = 1; i < m && curr != NULL; i++) {
                curr = curr->next;
            }
            
            // If we reached end, break
            if (curr == NULL) break;
            
            // Step 2: Start deleting next n nodes
            temp = curr->next;
            for (int i = 1; i <= n && temp != NULL; i++) {
                Node* del = temp;
                temp = temp->next;
                delete del; // free memory (optional if just unlinking)
            }
            
            // Step 3: Link current node to remaining list
            curr->next = temp;
            
            // Step 4: Move curr to next position
            curr = temp;
        }
        return head;
    }
};
