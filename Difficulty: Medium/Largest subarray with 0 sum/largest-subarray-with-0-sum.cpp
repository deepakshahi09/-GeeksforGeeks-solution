class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        map<int,int>m;
        int sum = 0;
        int mxl = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0){
                mxl = i+1;
            }
            if(m.find(sum) != m.end()){
                int l = i-m[sum];
                mxl = max(l,mxl);
            }
            else{
                m[sum] = i;
            }
        }
        return mxl;
    }
};