//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        vector<int> merge = a;
        
        merge.insert(merge.end(),b.begin(),b.end());
        
        sort(merge.begin(),merge.end());
        
        int n = merge.size();
        
        if(n%2==1){
            return merge[n/2];
        }
        else{
            return (merge[n/2-1]+merge[n/2])/2.0;
        }
        
        
        // Your code goes here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline after reading `t`

    while (t--) {
        // Read the first array
        string line1;
        getline(cin, line1);
        stringstream ss1(line1);

        vector<int> array1;
        int num;
        while (ss1 >> num) {
            array1.push_back(num);
        }

        // Read the second array
        string line2;
        getline(cin, line2);
        stringstream ss2(line2);

        vector<int> array2;
        while (ss2 >> num) {
            array2.push_back(num);
        }

        // Create a Solution object and calculate the median
        Solution ob;
        if (array2.size() == 1 && array2[0] == 0) {
            array2.pop_back();
        }

        double ans = ob.medianOf2(array1, array2);
        if (ans == (int)ans) {
            cout << (int)ans << endl;
        } else {
            cout << ans << endl;
        }

        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends