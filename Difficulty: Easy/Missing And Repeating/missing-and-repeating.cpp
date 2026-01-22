class Solution {
  public:
    vector<int> findTwoElement(vector<int>& nums) {
        // code here
        int i = 0;
        int n = nums.size();
        while(i < n){
            int cdi = nums[i]-1;
            if(nums[i] != nums[cdi]){
                swap(nums[i], nums[cdi]);
            }
            else{
                i++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i] != i+1){
                return {nums[i],i+1};
            }
        }
        return {};
    }
};