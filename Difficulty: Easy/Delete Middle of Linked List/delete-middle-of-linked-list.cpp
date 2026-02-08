/* Link list Node:

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

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        Node* fast = head;
        Node* slow = head;
        Node* prev = NULL;
        while(fast && fast->next){
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        
        prev->next = slow->next;
        delete slow;
        return head;
    }
};