//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		vector<int> find_sum(int n)
		{
		    int odd = 0;
		    int even = 0;
		    
		    while(n>0){
		        if(n%2==0){
		            even+=n;
		        }
		        else{
		            odd+=n;
		        }
		        n--;
		    }
		    return {odd,even};
		    // Code here

		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	vector<int> ans = ob.find_sum(n);
    	for(auto i: ans)
    		cout << i << " ";
    	cout<<"\n";
    
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends