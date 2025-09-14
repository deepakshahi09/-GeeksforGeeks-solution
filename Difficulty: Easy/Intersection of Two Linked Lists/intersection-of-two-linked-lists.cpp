/* structure of list node:

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
        // code here
        unordered_set<int>set;
        Node* temp = head2;
        while(temp){
            set.insert(temp->data);
            temp = temp->next;
        }
        Node* temp1 = head1;
        Node* dummy = new Node(-1);
        Node* tail = dummy;
        while(temp1){
            if(set.count(temp1->data)){
                tail->next = new Node(temp1->data);
                tail = tail->next;
            }
            temp1 = temp1->next;
        }
        return dummy->next;
    }
};