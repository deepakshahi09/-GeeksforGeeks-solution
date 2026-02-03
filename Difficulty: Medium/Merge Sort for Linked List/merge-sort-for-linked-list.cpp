/*
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node*  merge(Node* l1, Node* l2){
        if(!l2) return l1;
        if(!l1) return l2;
        if(l1->data <= l2->data){
            l1->next = merge(l1->next,l2);
            return l1;
        }
        else{
            l2->next = merge(l1,l2->next);
            return l2;
        }
    }
    Node* getmid(Node* head){
        Node* slow = head;
        Node* fast = slow->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    Node* mergeSort(Node* head) {
        if(!head || !head->next){
            return head;
        }
        Node* mid = getmid(head);
        Node* right = mid->next;
        mid->next = NULL;
        
        Node* left = mergeSort(head);
        right = mergeSort(right);
        
        return merge(left, right);
        // code here
        
    }
};