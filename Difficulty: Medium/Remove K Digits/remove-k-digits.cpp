class Solution {
  public:
    string removeKdig(string &s, int k) {
        // code here
        string st = "";
        
        for(int i=0;i<s.size();i++){
            while(!st.empty() && k > 0 && st.back() > s[i]){
                k--;
                st.pop_back();
            }
            st.push_back(s[i]);
        }
        while(!st.empty() && k > 0){
            st.pop_back();
            k--;
        }
        int i = 0;
        while(i < st.size() && st[i] == '0'){
            i++;
        }
        st = st.substr(i);
        if(st.empty()){
            return "0";
        }
        return st;


    }
};