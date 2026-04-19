class Solution {
  public:
    string modify(string& s) {
         int i = 0;
        int j = s.size() - 1;

        while(i < j){

            // left se vowel dhundo
            while(i < j && !(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')){
                i++;
            }

            // right se vowel dhundo
            while(i < j && !(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')){
                j--;
            }

            // swap vowels
            if(i < j){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            }
        }

        return s;
        // code here.
    }
};


