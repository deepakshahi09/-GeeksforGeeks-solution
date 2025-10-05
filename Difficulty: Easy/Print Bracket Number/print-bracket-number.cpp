// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        vector<int>ans;
        stack<int>st;
        
        int count = 0;
        for(char ch : str){
            if(ch == '('){
                count++;
                st.push(count);
                ans.push_back(count);
            }
            else if(ch == ')'){
                ans.push_back(st.top());
                
                st.pop();
            }
        }
        return ans;
        
        // Your code goes here
    }
};