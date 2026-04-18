class Solution {
  public:
    int maxOnes(vector<int>& arr) {
        int sum = 0;
        int i = 0;
        while(i < arr.size()){
            if(arr[i] == 1){
                sum++;
            }
            i++;
        }
        
        int maxsum = 0;
        int currsum = 0;
        i = 0;
        while(i < arr.size()){
            if(arr[i] == 1){
                currsum = currsum - 1;
            }
            else{
                currsum = currsum + 1;
            }
            
            if(currsum < 0){
                currsum = 0;
            }
            if(currsum > maxsum){
                maxsum = currsum;
            }
            i++;
        }
        return sum + maxsum;
        // code here
        
    }
};