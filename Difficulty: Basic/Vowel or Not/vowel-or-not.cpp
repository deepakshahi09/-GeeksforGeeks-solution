//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return "YES";
        }
        else if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            return "YES";
        }
        return "NO";
        // code here 
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin >> c;
        Solution ob;
        cout << ob.isVowel(c) << endl;
    
cout << "~" << "\n";
}
    return 0; 
} 
// } Driver Code Ends