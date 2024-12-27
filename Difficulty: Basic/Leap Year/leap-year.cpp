//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isLeap(int N){
        if(N%4==0){
            if(N%100==0){
                return N%400==0;
            }
            return true;
            
        }
        return false;
        //code here
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isLeap(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends