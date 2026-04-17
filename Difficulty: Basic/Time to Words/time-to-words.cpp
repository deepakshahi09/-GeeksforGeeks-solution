// User function Template for C++
class Solution {
  public:
    string timeToWord(int H, int M) {
         string words[] = {
            "zero","one","two","three","four","five","six",
            "seven","eight","nine","ten","eleven","twelve",
            "thirteen","fourteen","quarter","sixteen",
            "seventeen","eighteen","nineteen","twenty",
            "twenty one","twenty two","twenty three",
            "twenty four","twenty five","twenty six",
            "twenty seven","twenty eight","twenty nine"
        };
        if(M == 0){
            return words[H] + " o' clock";
        }
        else if(M == 15){
            return "quarter past "+ words[H];
        }
        else if(M == 30){
            return "half past "+words[H];
        }
        else if(M == 45){
            return "quarter to "+words[H+1];
        }
       if(M < 30){
            if(M == 1){
                return words[M] + " minute past " + words[H];
            }
            return words[M] + " minutes past " + words[H];
        }
        
        int rem = 60 - M;
        if(rem == 1){
            return words[rem] + " minute to " + words[H+1];
        }
        return words[rem] + " minutes to " + words[H+1];
        
    }
};