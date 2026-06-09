class Solution {
  public:
    bool canSeatAllPeople(int k, vector<int> &seats) {
        // code here
        int count = 0;
        int n = seats.size();
        for(int i=0;i<n;i++){
            if(seats[i] == 0){
                int left = (i == 0) ? 0 : seats[i-1];
                int right = (i == n-1)?0:seats[i+1];
                
                if(left == 0 && right == 0){
                    count++;
                    seats[i] = 1;
                }
            }
        }
        return count>=k;
    }
};