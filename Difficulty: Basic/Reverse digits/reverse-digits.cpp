//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int reverseDigits(int n) {
        int rev = 0;
        while(n>0){
            rev = rev*10 + n%10;
            n/=10;
        }
        return rev;
        // Code here
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        int ans = ob.reverseDigits(n);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends