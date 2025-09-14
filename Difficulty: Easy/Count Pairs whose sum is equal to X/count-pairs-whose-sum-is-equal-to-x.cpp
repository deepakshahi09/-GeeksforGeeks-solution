/*
Structure of the node of the linked list is as
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        unordered_set<int>set;
        Node* temp = head1;
        while(temp){
            set.insert(temp->data);
            temp = temp->next;
        }
        Node* temp2 = head2;
        int count = 0;
        while(temp2){
            int need = x - temp2->data;
            if(set.count(need)){
                count++;
            }
            temp2 = temp2->next;
        }
        return count;
        // Code here
        
    }
};