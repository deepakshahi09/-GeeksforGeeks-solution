class Solution {
  public:
    bool isSubSequence(string A, string B) {
        
        int i = 0; // pointer for A
        int j = 0; // pointer for B
        
        while(i < A.size() && j < B.size()){
            
            if(A[i] == B[j]){
                i++;  // match mila → A aage
            }
            
            j++; // B hamesha aage
        }
        
        // agar A pura match ho gaya
        if(i == A.size()){
            return true;
        }
        
        return false;
    }
};