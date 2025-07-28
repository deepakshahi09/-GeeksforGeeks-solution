/*The structure of the class is
class SortedStack{
public:
    stack<int> s;
    void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */
void SortedStack ::sort() {
    // Your code here
    vector<int>temp;
    while(!s.empty()){
        temp.push_back(s.top());
        s.pop();
    }
    ::sort(temp.begin(),temp.end());
    
    
    for(int p : temp){
        s.push(p);
    }
}