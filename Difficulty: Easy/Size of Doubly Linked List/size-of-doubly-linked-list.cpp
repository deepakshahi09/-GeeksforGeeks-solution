// User function Template for C++
class Solution {
  public:
    int findSize(Node *head) {
        // Code Here
        if(head==NULL){
            return 0;
        }
        int c = 0;
        while(head){
            c++;
            head = head->next;
        }
        return c;
    }
};