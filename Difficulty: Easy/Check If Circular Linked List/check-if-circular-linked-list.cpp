/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};bool isCircular(Node *head) {
        if (head == NULL) {
            return true;  // sometimes considered circular
        }

        Node* curr = head->next;

        // traverse until we either come back to head or reach NULL
        while (curr != NULL && curr != head) {
            curr = curr->next;
        }

        return (curr == head);  
*/

/* Should return true if linked list is circular, else false */
class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
        if(head == NULL){
            return true;
        }
        Node* curr = head->next;
        while(curr != nullptr && curr != head){
            curr = curr->next;
        }
        return (curr  == head);
    }
};