/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        int freq[3] = {0,0,0};
        Node* temp = head;
        while(temp){
            freq[temp->data]++;
            temp = temp->next;
        }
        temp = head;
        int i = 0;
        while(temp){
            if(freq[i] == 0){
                i++;
            }
            else{
                temp->data = i;
                freq[i]--;
                temp = temp->next;
            }
            
        }
        return head;
    }
};