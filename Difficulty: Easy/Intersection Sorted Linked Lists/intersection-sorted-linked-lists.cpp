/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // unordered_set<int>set;
        // Node* temp = head1;
        // while(temp){
        //     set.insert(temp->data);
        //     temp = temp->next;
        // }
        // Node* dummy = new Node(0);
        // Node* tail = dummy;
        // while(head2){
        //     if(set.find(head2->data) != set.end()){
        //       tail->next = new Node(head2->data);
        //       tail = tail->next;
        //     }
        //     head2 = head2->next;
            
        // }
        // return dummy->next;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        unordered_set<int>set;
        while(head1){
            set.insert(head1->data);
            head1 = head1->next;
        }
        
        Node* dummy = new Node(0);
        Node* temp = dummy; 
        while(head2){
            if(set.find(head2->data) != set.end()){
                temp->next = new Node(head2->data);
                temp = temp->next;
            }
            head2 = head2->next;
        }
        return dummy->next;
        
        
        // code goes here.
    }
};