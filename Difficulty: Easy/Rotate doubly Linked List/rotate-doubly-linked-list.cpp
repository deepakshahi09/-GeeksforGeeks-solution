/*
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int x)
    {
        data = x;
        prev = nullptr;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *rotateDLL(Node *head, int p) {
        if(!head || !head->next || p==0){
            return head;
        }
        int len = 1;
        Node* temp = head;
        while(temp->next){
            temp = temp->next;
            len++;
        };
        p = p % len;
        if(p==0){
            return head;
        }
        temp->next = head;
        head->prev = temp;
        Node* newtail = head;
        for(int i=1;i<p;i++){
            newtail = newtail->next;
        }
        Node* newhead = newtail->next;
        newtail->next = NULL;
        newhead->prev = NULL;
        return newhead;

        // code here..
    }
};