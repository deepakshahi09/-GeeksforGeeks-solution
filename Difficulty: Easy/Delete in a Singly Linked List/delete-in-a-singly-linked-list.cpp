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
class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head==NULL){
            return NULL;
        }
        if(x==1){
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        int c = 0;
        Node* pre = NULL;
        Node* curr = head;
        while(curr && c < x-1){
            c++;
            pre = curr;
            curr = curr->next;
        }
        if(curr==NULL){
            return head;
        }
        pre->next = curr->next;
        delete curr;
        return head;
    }
};