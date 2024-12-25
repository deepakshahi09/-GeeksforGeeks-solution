//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        
        int total = 0;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='I'){
                if(s[i+1]=='V' || s[i+1]=='X'){
                    total-=1;
                }
                else{
                    total+=1;
                }
            }
            
            else if(s[i]=='V'){
                total+=5;
            }
            
            else if(s[i]=='X'){
                if(s[i+1]=='L' || s[i+1]=='C'){
                    total-=10;
                }
                else{
                    total+=10;
                }
            }
            
            else if(s[i]=='L'){
                total+=50;
            }
            
            else if(s[i]=='C'){
                if(s[i+1]=='M' || s[i+1]=='D'){
                    total-=100;
                }
                else{
                    total+=100;
                }
            }
            
            else if(s[i]=='D'){
                total+=500;
            }
            
            else if(s[i]=='M'){
                total+=1000;
            }
        }
        return total;
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends