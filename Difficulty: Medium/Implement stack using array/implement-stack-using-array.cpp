class myStack {
  public:
    
    int *arr;
    int size;
    int top;

    myStack(int n) {
        size = n;
        top = -1;
        arr = new int[n];
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == size - 1);
    }

    void push(int x) {
        if(!isFull()) {
            top++;
            arr[top] = x;
        }
    }

    void pop() {
        if(!isEmpty()) {
            top--;
        }
    }

    int peek() {
        if(!isEmpty()) {
            return arr[top];
        }
        return -1;
    }
};
