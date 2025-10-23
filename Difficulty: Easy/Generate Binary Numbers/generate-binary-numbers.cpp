class Solution {
  public:
    vector<string> generateBinary(int n) {
        // code here
        queue<string>q;
        vector<string>v;
        q.push("1");
        for(int i=1;i<=n;i++){
            string s = q.front();
            q.pop();
            v.push_back(s);
            q.push(s+"0");
            q.push(s+"1");
        }
        return v;
        
    }
};