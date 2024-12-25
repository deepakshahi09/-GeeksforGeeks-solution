//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        
        for(int val: arr){
            if(val>max1){
                max2=max1;
                max1=val;
            }
            else if(val>max2){
                max2=val;
            }
        }
        return max1*max2;
       
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.maxProduct(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends