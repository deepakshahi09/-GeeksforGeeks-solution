string transform(string S){
    //complete the function here
    
    string res;
    stack<char> st;
    
    for(int i = 0; i < S.size(); i++)
    {
        char c = tolower(S[i]);
        if(st.empty() || st.top() == c)
        {
            st.push(c);
        }
        else
        {
            res+=to_string(st.size()) + st.top();
            while(!st.empty())
            {
                st.pop();
            }
            st.push(c);
        }
    }
    
    if(!st.empty())
    {
        res+=to_string(st.size()) + st.top();
    }
    
    return res;
}