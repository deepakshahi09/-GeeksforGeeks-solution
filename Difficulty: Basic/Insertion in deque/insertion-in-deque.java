// User function Template for Java

class Solution {
    // Function to insert all elements of the array in deque.
    public static ArrayDeque<Integer> deque_Init(int arr[], int n) {
        ArrayDeque<Integer>dq = new ArrayDeque<>();
        for(int i=0;i<n;i++){
            dq.addLast(arr[i]);
        }
        return dq;
        // Your code here
    }
}