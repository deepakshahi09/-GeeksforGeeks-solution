#include <bits/stdc++.h>
using namespace std;

class myQueue {
public:
    int *arr;
    int front, rear, size, capacity;

    // Constructor
    myQueue(int n) {
        capacity = n;
        arr = new int[n];
        front = 0;
        rear = -1;
        size = 0;
    }

    // Check if queue is empty
    bool isEmpty() {
        return (size == 0);
    }

    // Check if queue is full
    bool isFull() {
        return (size == capacity);
    }

    // Add an element at the rear
    void enqueue(int x) {
        if (isFull()) return; // can't enqueue
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        size++;
    }

    // Remove the front element
    void dequeue() {
        if (isEmpty()) return; // can't dequeue
        front = (front + 1) % capacity;
        size--;
    }

    // Return front element
    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    // Return rear element
    int getRear() {
        if (isEmpty()) return -1;
        return arr[rear];
    }
};
