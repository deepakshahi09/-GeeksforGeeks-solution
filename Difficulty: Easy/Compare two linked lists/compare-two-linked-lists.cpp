class Solution {
  public:
    int compare(Node *h1, Node *h2) {
        while (h1 != NULL && h2 != NULL) {
            if (h1->data > h2->data)
                return 1;
            if (h1->data < h2->data)
                return -1;

            h1 = h1->next;
            h2 = h2->next;
        }

        // both ended → equal
        if (h1 == NULL && h2 == NULL)
            return 0;

        // first list longer
        if (h1 != NULL)
            return 1;

        // second list longer
        return -1;
    }
};
