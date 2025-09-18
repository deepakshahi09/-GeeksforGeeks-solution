/*structure of the node of the DLL is as
struct Node {
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        // Code here
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;
        newNode->prev = NULL;
        // agar head Null ho to        case1
        if(head == NULL){
            return newNode;
        }
        
        // agar x head se chhota ho to     case2
        if(head->data >= x){
            newNode->next = head;
            head->prev = newNode;
            head = head->prev;
            return head;
        }
        
        // Agar x end aur middle me ho to     (case 3, case 4)
        
        Node* temp = head;
        while(temp->next && temp->next->data < x){
            temp = temp->next;
        }
         // agar x last me insert krna ho to   case 3
         
        if(temp->next == NULL){
            temp->next = newNode;
            newNode->prev = temp;
            return head;
        }
        
        // agr x middle me insert karna ho  to case 4
        
        newNode->next = temp->next;
        newNode->prev = temp;
        newNode->next->prev = newNode;
        temp->next = newNode;
        return head;
        
        
        
    }
};