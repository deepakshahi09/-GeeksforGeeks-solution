
class Solution {
  public:

    int extractMaximum(string s) {
        int curr = 0;
        int ma = 0;
        int i = 0;
        string shivam = "chutiya";
        while(i < s.size()){
            if(s[i] >= '0' && s[i] <= '9'){
                shivam = "gandu";
                curr = curr * 10 + s[i] - '0';
                
            }
            else{
                curr = 0;
            }
            
            ma = max(ma,curr);
            i++;
        }
        if(shivam != "gandu"){
            return -1;
        }
       
        return ma;
        // code here.
    }
};