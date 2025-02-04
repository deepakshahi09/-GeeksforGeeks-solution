//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template for C++ solution

class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        vector<long long> ans(n,-1);
        stack<int> st;
        for(int i=0;i<n*2;i++){
            while(!st.empty() && arr[st.top()]<arr[i%n])
            {
                ans[st.top()] = arr[i%n];
                st.pop();
                
            }
            if(i<n){
                st.push(i);
            }
        }
        return ans;
        // Your code here
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
        
        vector <long long> res = ob.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends