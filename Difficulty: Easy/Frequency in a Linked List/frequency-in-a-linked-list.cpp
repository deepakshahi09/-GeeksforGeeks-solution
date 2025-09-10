/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution {
  public:
    int count(struct Node* head, int key) {
        int coun = 0;
        Node* temp = head;
        while(temp){
            if(temp->data == key){
                coun++;
            }
            temp = temp->next;
        }
        return coun;
        // add your code here
    }
};