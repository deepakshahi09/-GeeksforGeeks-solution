class Solution {
  public:
    string gameResult(string s) {
        char first = s[0];
        char second = s[1];
        
        if(first == second){
            return "DRAW";
        }
        else if(first == 'R' && second == 'P'){
            return "B";
        }
        else if(first == 'P' && second == 'R'){
            return "A";
        }
        else if(first == 'R' && second == 'S'){
            return "A";
        }
        else if(first == 'S' && second == 'R'){
            return "B";
        }
        else if(first == 'P' && second == 'S'){
            return "B";
        }
        else if(first == 'S' && second == 'P'){
            return "A";
        }
        
        return "#";
    }
};