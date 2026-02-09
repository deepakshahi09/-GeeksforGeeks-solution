/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/
class Solution {
  public:
    Node* pairWiseSwap(Node* head) {\
    if(head == NULL || head->next == NULL){
            return head;
        }
        Node* prev = NULL;
        Node* curr = head;
        head = curr->next;
        
        while(curr && curr->next){
            Node* next = curr->next;
            Node* nextpair = next->next;
            
            next->next = curr;
            curr->next = nextpair;
            
            if(prev != NULL){
                prev->next = next;
            }
            prev = curr;
            curr = nextpair;
        }
        return head;
        // The task is to complete this method
    }
};