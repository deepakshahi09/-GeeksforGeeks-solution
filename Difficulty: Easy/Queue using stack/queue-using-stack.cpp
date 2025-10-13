#include <stack>
using namespace std;

class myQueue {
private:
    stack<int> s1; // Stack to store new elements (enqueue here)
    stack<int> s2; // Stack to help with dequeue and front operations

    // Helper function to move elements from s1 to s2
    // This ensures the oldest element is on top of s2
    void moveS1toS2() {
        if (s2.empty()) {          // Only move if s2 is empty
            while (!s1.empty()) {  // Transfer all elements from s1 to s2
                s2.push(s1.top()); // Push top of s1 onto s2
                s1.pop();           // Remove top from s1
            }
        }
    }

public:
    // Constructor: no explicit initialization needed
    myQueue() {
    }

    // Insert element x at the rear of the queue
    void enqueue(int x) {
        s1.push(x); // Always push new elements to s1
    }

    // Remove the front element of the queue
    void dequeue() {
        moveS1toS2();  // Ensure s2 has the front element on top
        if (!s2.empty()) {
            s2.pop();  // Remove the front element
        }
        // If both stacks are empty, do nothing (queue is empty)
    }

    // Return the front element of the queue
    int front() {
        moveS1toS2();       // Ensure s2 has the front element
        if (s2.empty()) 
            return -1;      // Queue is empty
        return s2.top();    // Return the front element
    }

    // Return the number of elements currently in the queue
    int size() {
        return s1.size() + s2.size(); // Total elements in both stacks
    }
};
