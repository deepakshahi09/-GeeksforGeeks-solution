// User function template for C++

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
    Node* divide(Node* head) {
        Node* ev = new Node(-1);
        Node* e = ev;
        Node* od = new Node(-1);
        Node* o = od;
        Node* temp = head;
        while(temp){
            if(temp->data % 2 == 0){
                e->next = temp;
                e = e->next;
            }
            else{
                o->next = temp;
                o = o->next;
            }
            temp = temp->next;
        }
        o->next = NULL;
        e->next = od->next;
        return ev->next;
        // code here
        
    }
};