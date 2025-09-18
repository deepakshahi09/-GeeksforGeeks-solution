// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/
class Solution {
  public:
    struct Node* partition(struct Node* head, int x) {
        // code here
        Node* small = new Node(-1);
        Node* equal = new Node(-1);
        Node* great = new Node(-1);
        
        Node* ptr1 = small;
        Node* ptr2 = equal;
        Node* ptr3 = great;
        
        Node* temp = head;
        while(temp){
            if(temp->data < x){
                ptr1->next = temp;
                ptr1 = ptr1->next;
            }
            else if(temp->data == x){
                ptr2->next = temp;
                ptr2 = ptr2->next;
            }
            else{
                ptr3->next = temp;
                ptr3 = ptr3->next;
            }
            temp = temp->next;
        }
        ptr3->next = NULL;
        ptr2->next = great->next;
        ptr1->next = equal->next;
        return small->next;
      
    }
};