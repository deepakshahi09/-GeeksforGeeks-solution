/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

class Solution {
  public:
    void deleteNode(Node* del_node) {
        // code here
        if(del_node == NULL && del_node->next == NULL){
            return;
        }
        Node* temp = del_node->next;
        del_node->data = temp->data;
        del_node->next = temp->next;
        delete temp;
        
    }
};