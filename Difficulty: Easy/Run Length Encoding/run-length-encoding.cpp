// class Solution {
//   public:
//     string encode(string s) {
//         // code here
//         string ans = "";
//         stack<char>st;
//         int count = 0;
//         for(char ch : s){
//             if(st.empty()){
//                 st.push(ch);
//                 count = 1;
//             }
//             else{
//                 if(st.top() == ch){
//                     count++;
//                 }
//                 else{
//                     ans = ans+st.top();
//                     ans = ans+to_string(count);
//                     st.pop();
//                     count = 1;
//                     st.push(ch);
//                 }
//             }
//         }
//         if(!st.empty()){
//             ans= ans+st.top();
//             ans=ans+to_string(count);
//         }
//         return ans;
//     }
// };



class Solution {
  public:
    string encode(string s) {
        
        string ans = "";
        ans.reserve(s.length() * 2);  // optimization 🔥
        
        int count = 1;
        
        for(int i = 1; i < s.length(); i++){
            
            if(s[i] == s[i-1]){
                count++;
            }
            else{
                ans += s[i-1];
                ans += to_string(count);
                count = 1;
            }
        }
        
        // last group
        ans += s[s.length()-1];
        ans += to_string(count);
        
        return ans;
    }
};