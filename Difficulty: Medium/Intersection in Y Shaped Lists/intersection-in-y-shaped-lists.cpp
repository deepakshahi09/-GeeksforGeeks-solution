/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        if(!head1 || !head2){
            return NULL;
        }
        //  Code Here
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        while(temp1 != temp2){
            if(temp1 == NULL){
                temp1 = head2;
            }
            else{
                 temp1 = temp1->next;
            }
            if(temp2 == NULL){
                temp2= head1;
            }
            else{
                temp2 = temp2->next;
            }
           
            
            
            
        }
        return temp1;
        
    }
};