class Solution {
  public:
    // Function to find the nodes that are common in both BST.
    vector<int> findCommon(Node *r1, Node *r2) {
        stack<Node*>s1,s2;
        vector<int>ans;
        while(true){
            while(r1){
                s1.push(r1);
                r1 = r1->left;
            }
            while(r2){
                s2.push(r2);
                r2 = r2->left;
            }
            if(s1.empty() || s2.empty()){
                break;
            }
            Node* top1 = s1.top();
            Node* top2 = s2.top();
            
            if(top1->data == top2->data){
                ans.push_back(top1->data);
                s1.pop();
                s2.pop();
                
                r1 = top1->right;
                r2 = top2->right;
            }
            else if(top1->data < top2->data){
                s1.pop();
                r1 = top1->right;
            }
            else{
                s2.pop();
                r2 = top2->right;
            }
        }
        return ans;
        // Your code here
        
    }
};