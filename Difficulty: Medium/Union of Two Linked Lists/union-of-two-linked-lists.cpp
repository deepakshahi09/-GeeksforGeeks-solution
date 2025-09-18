/*
// structure of the node is as follows

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

*/
class Solution {
  public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        // code here
        set<int>set;
        Node* temp1 = head1;
        while(temp1){
            set.insert(temp1->data);
            temp1 = temp1->next;
        }
        Node* temp2 = head2;
        while(temp2){
            set.insert(temp2->data);
            temp2=temp2->next;
        }
        Node* dummy = new Node(0);
        Node* tail = dummy;
        
        // vector<int>ans(set.begin(),set.end());
        // sort(ans.begin(),ans.end());
        
        for(int i : set){
            tail->next = new Node(i);
            tail = tail->next;
        }
        return dummy->next;
        
    }
};