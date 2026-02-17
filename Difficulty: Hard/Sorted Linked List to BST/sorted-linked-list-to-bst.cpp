/*
struct LNode { //Linked List
    int data;
    struct LNode* next;
    LNode(int x){
        data = x;
        next = NULL; }
};
struct TNode {   //Tree
    int data;
    struct TNode* left;
    struct TNode* right;
    TNode(int x){
        data=x;
        left=right=NULL; }
}; */
class Solution {
  public:
    LNode* getmid(LNode* head){
        LNode * slow = head;
        LNode* fast = head;
        LNode* prev = NULL;
        while(fast && fast->next){
            prev = slow;
            fast = fast->next->next;
            slow = slow->next;
        }
        if(prev){
            prev->next = NULL;
        }
        return slow;
    }
    TNode *sortedListToBST(LNode *head) {
        if(!head){
            return NULL;
        }
        if(!head->next){
            return new TNode(head->data);
        }
        LNode* mid = getmid(head);
        TNode* root = new TNode(mid->data);
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(mid->next);
        return root;
        // code here
        
    }
};