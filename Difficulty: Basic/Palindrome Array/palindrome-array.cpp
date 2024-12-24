//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        int n = arr.size();
        for(int i=0;i<n/2;i++){
            if(arr[i]!=arr[n-i-1]){
                return false;
            }
        }
        return true;
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }

        Solution obj;
        bool res = obj.isPerfect(nums);

        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends