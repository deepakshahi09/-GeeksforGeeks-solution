#include <stack>
using namespace std;

class myQueue {
private:
    stack<int> s1; 
    stack<int> s2; 
    void moveS1toS2() {
        if (s2.empty()) {         
            while (!s1.empty()) { 
                s2.push(s1.top());
                s1.pop();          
            }
        }
    }

public:
    myQueue() {
    }

    void enqueue(int x) {
        s1.push(x);
    }

    void dequeue() {
        moveS1toS2();  
        if (!s2.empty()) {
            s2.pop();  
        }
    }

    int front() {
        moveS1toS2();      
        if (s2.empty()) 
            return -1;     
        return s2.top();   
    }

    int size() {
        return s1.size() + s2.size(); 
    }
};
