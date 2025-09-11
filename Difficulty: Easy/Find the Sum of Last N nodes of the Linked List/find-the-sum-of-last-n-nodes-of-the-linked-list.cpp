class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        if(head == NULL){
            return 0;
        }
        Node* fast = head;
        Node* slow = head;
        
        int co = 1;
        while(co<=n){
            fast = fast->next;
            co++;
        }
        while(fast){
            fast = fast->next;
            slow = slow->next;
        }
        int sum = 0;
        while(slow){
            sum+=slow->data;
            slow = slow->next;
        }
        return sum;
        
        
    }
};