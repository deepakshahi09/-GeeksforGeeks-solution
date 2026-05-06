

class Solution {
  public:
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n,long long k) {
        
        long long product = 1;
        long long count = 0;
        int left = 0;
        
        if(k<=1){
            return 0;
        }
        
        for(int i=0;i<arr.size();i++){
            product = product*arr[i];
            
            while(product >= k){
                product/=arr[left];
                left++;
            }
            count+=(i-left+1);
        }
        return count;
        
        
    }
};