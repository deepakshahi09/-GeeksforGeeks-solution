class Solution {
  public:
    int minCost(vector<int>& arr) {
        priority_queue<int, vector<int>, greater<int> > pq;

        int i = 0;
        while (i < arr.size()) {
            pq.push(arr[i]);
            i++;
        }

        int cost = 0;

        while (pq.size() > 1) {
            int first = pq.top();
            pq.pop();

            int second = pq.top();
            pq.pop();

            int sum = first + second;
            cost = cost + sum;

            pq.push(sum);
        }

        return cost;
    }
};