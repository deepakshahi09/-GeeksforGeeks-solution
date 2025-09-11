/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    int fractional_node(struct Node *head, int k) {
        int c = 0;
        Node* temp = head;
        while(temp){
            c++;
            temp = temp->next;
        }
        int p = (c+k-1)/k;
        temp = head;
        for(int i=1;i<p;i++){
           temp = temp->next;
       }
        
        return temp->data;
        // your code here
        
    }
};