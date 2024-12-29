//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    vector<int> countOddEven(vector<int> &arr) {
        int ev = 0;
        int od = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0){
                ev++;
            }
            else{
                od++;
            }
        }
        return {od,ev};
        // your code here
    }
};

//{ Driver Code Starts.
int main() {

    // Testcase input
    int testcase;
    cin >> testcase;
    cin.ignore();

    while (testcase--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        vector<int> res = ob.countOddEven(arr);
        for (auto t : res) {
            cout << t << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends