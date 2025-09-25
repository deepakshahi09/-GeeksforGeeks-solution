/*

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
    Node* rev(Node* head){
        if(head == NULL){
            return NULL;
        }
        Node* next = NULL;
        Node* prev = NULL;
        Node* curr = head;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        Node* temp = rev(head);
        Node* p = temp;
        Node* pre = NULL;
        int carry = 0;
        int sm =1;
        while(p){
            int sum = p->data + carry+sm;
            sm = 0;
            carry = sum/10;
            p->data = sum%10;
            pre = p;
            p = p->next;
        }
        if(carry > 0){
            pre->next = new Node(carry);
        }
        return rev(temp);
        // Your Code here
        
        // return head of list after adding one
    }
};