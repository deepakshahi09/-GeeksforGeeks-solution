// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/
class Solution {
  public:
    bool searchLinkedList(Node *head, int x) {
        // Your code here
        Node *curr = head;
        while(curr){
            if(curr->data == x){
                return true;
            }
            curr = curr->next;
        }
        return false;
    }
};