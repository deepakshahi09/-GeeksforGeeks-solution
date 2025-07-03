class Solution {
  public:
    int height(Node* node){
        return node ? node->height : 0;
    }

    int getbalance(Node* node){
        return node ? height(node->left) - height(node->right) : 0;
    }

    /* ---------- basic rotations ---------- */
    Node* rightRotate(Node* y){
        Node* x  = y->left;
        Node* t2 = x->right;

        x->right = y;
        y->left  = t2;

        y->height = 1 + max(height(y->left), height(y->right));
        x->height = 1 + max(height(x->left), height(x->right));
        return x;
    }

    Node* leftRotate(Node* x){
        Node* y  = x->right;
        Node* t2 = y->left;

        y->left  = x;
        x->right = t2;

        x->height = 1 + max(height(x->left), height(x->right));
        /* FIX ↓: use y->left, not y->right twice */
        y->height = 1 + max(height(y->left), height(y->right));
        return y;
    }

    /* ---------- insertion ---------- */
    Node* insertToAVL(Node* node, int data){
        /* 1 . BST insert */
        if(!node){
            return new Node(data);          // GfG’s struct has this ctor
        }
        if(data < node->data)      node->left  = insertToAVL(node->left,  data);
        else if(data > node->data) node->right = insertToAVL(node->right, data);
        else                       return node;         // duplicate

        /* 2 . update height */
        node->height = 1 + max(height(node->left), height(node->right));

        /* 3 . rebalance */
        int balance = getbalance(node);

        // Left Left
        if(balance > 1 && data < node->left->data)
            return rightRotate(node);        // FIX: was leftRotate

        // Right Right
        if(balance < -1 && data > node->right->data)
            return leftRotate(node);

        // Left Right
        if(balance > 1 && data > node->left->data){
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }

        // Right Left
        if(balance < -1 && data < node->right->data){
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }

        return node;                         // already balanced
    }
};
