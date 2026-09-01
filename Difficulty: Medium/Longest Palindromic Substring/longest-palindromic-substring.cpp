class Solution {
  public:
    string getLongestPal(string &s) {
        // code here
        int st = 0;
        int maxlen = 1;
        int n = s.size();
        int left = 0;
        int right = 0;
        
        for(int i=0;i<n;i++){
            
            
            //odd length
            left = i;
            right = i;
            while(left>=0 && right<n && s[left]==s[right]){
                if(right-left+1 > maxlen){
                    maxlen = right-left+1;
                    st = left;
                }
                left--;
                right++;
            }
            
            //odd legth
            
            left = i;
            right = i+1;
            
            while(left>=0 && right< n && s[left] == s[right]){
                if(right-left+1 > maxlen){
                    maxlen = right-left+1;
                    st = left;
                }
                left--;
                right++;
            }
        }
        s = s.substr(st,maxlen);
        return s;
    }
};