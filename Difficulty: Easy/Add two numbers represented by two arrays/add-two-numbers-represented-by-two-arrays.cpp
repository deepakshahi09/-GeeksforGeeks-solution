

class Solution {
  public:
    string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
        string ans = "";
        int carry = 0;
        int i = arr1.size()-1;
        int j = arr2.size()-1;
        
        while(i >= 0 || j>=0|| carry > 0){
            int sum = carry;
            if(i >= 0){
                sum+=arr1[i];
                i--;
            }
            if(j >= 0){
                sum+=arr2[j];
                j--;
            }
           
            ans = ans+to_string((sum % 10));
            carry = sum/10;
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        // Complete the function
    }
};