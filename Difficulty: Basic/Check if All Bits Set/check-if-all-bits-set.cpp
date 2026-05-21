class Solution {
  public:
    bool isBitSet(int n) {
        if(n == 0){
            return false;
        }
        string binary = "";
        while(n>0){
            binary = binary + to_string(n % 2);
            n = n/2;
        }
        for(int i=1;i<binary.size();i++){
            if(binary[0] != binary[i]){
                return false;
            }
        }
        return true;
        
        
        // code here
        
    }
};