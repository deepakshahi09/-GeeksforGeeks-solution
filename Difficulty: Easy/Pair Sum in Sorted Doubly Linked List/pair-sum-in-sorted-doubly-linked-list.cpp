/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
}; */

class Solution {
  public:
    vector<vector<int>> givenSumPairs(Node* head, int target) {
        vector<vector<int>>ans;
        Node* st = head;
        Node* lst = head;
        while(lst->next){
            lst = lst->next;
        }
        
        while(lst != st && st->prev != lst){
            int sum = lst->data + st->data;
            if(sum == target){
                ans.push_back({st->data,lst->data});
            }
            if(sum > target){
                lst = lst->prev;
            }
            else{
                st = st->next;
            }
        }
        return ans;
        
    }
};


