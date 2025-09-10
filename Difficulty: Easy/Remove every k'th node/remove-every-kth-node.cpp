/* Link list Node

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        // code here
        if (head == nullptr || k <= 0) 
        return head;
    Node* curr = head;
    Node* prev = nullptr;
    // Initialize counter to track node positions
    int count = 0;
    // Traverse the linked list
    while (curr != nullptr) {
        count++;
        // If count is a multiple of k, remove current node
        if (count % k == 0) {
            // skip the current node
            if (prev != nullptr) {
                prev->next = curr->next;
            } 
            else {
              
                head = curr->next;
            }
        } 
        else {
            // Update previous node pointer only if
            // we do not remove the node
            prev = curr;
        }
        curr = curr->next;
    }
    return head;
    }
};