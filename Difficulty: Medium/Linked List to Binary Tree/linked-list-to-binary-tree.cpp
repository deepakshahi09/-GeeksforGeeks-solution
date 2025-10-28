/*
class NodeLL {
  public:
    int data;
    NodeLL *next;

    NodeLL(int x) {
        data = x;
        next = NULL;
    }
};
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    Node *linkedListToBinaryTree(NodeLL *head) {
        if(head == NULL){
            return NULL;
        }
        Node* root = new Node(head->data);
        queue<Node*>q;
        q.push(root);
        head = head->next;
        while(head){
            Node* parent = q.front();
            q.pop();
            
            
            Node*leftchild = new Node(head->data);
            parent->left = leftchild;
            q.push(leftchild);
            head = head->next;
            
            if(head){
               Node* rightchild = new Node(head->data);
               parent->right = rightchild;
               q.push(rightchild);
               head = head->next;
            }
        }
        return root;
        // code here
        
    }
};











