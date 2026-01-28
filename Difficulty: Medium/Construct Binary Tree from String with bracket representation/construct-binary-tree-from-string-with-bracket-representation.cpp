// User function Template for C++

/*
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
*/

class Solution {
  public:
    Node* solve(string &s,int &i){
        if(s[i] == ')'){
            return NULL;
        }
        int num = 0;
      
        while(i<s.size() && isdigit(s[i])){
            num = num*10 + (s[i]-'0');
            i++;
        }
        Node* root = new Node(num);
        if(i<s.size() && s[i] == '('){
            i++;
            root->left  = solve(s,i);
            i++;
        }
        if(i<s.size() && s[i] == '('){
            i++;
            root->right = solve(s,i);
            i++;
        }
        return root;
        
        
    }
    // function to construct tree from string
    Node *treeFromString(string str) {
        int i = 0;
        solve(str,i);
        // code here
        
    }
};