class Solution {
  public:
    int countFriendsPairings(int n) {
        // code here
        if(n == 0 || n == 1){
            return 1;
        }
        else if(n==2){
            return 2;
        }
        return countFriendsPairings(n-1) + (n-1) * countFriendsPairings(n-2); 
        
    }
};
