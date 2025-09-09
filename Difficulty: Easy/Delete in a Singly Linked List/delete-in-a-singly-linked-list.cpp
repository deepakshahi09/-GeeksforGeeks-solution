/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(x==1){
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        int curr = 1;
        Node* temp = head;
        while(curr != x-1){
            temp = temp->next;
            curr++;
        }
        Node* curr_node = temp->next;
        temp->next = temp->next->next;
        delete curr_node;
        return head;
        
    }
};