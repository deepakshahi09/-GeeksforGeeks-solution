//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        if(arr.size()==0){
            return "";
        }
        sort(arr.begin(),arr.end());
        
        string ans ="";
        
        string s1=arr[0];
        string s2=arr[arr.size()-1];
        
        for(int i=0;i<s1.size();i++){
            if(s1[i]==s2[i]){
                ans+=s1[i];
            }
            else{
                break;
            }
        }
        return ans;
        
        
        
        
        
        // your code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        string ans = ob.longestCommonPrefix(arr);
        if (ans.empty())
            cout << "\"\"";
        else
            cout << ans;
        cout << endl;
    }
}

// } Driver Code Ends