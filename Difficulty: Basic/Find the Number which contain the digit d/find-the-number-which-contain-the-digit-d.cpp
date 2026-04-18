
    vector<int> solve(int n, int d) {
        vector<int> ans;

        int i = 0;
        while(i <= n) {
            int num = i;

            // special case for 0
            if(num == 0 && d == 0) {
                ans.push_back(0);
            }

            while(num > 0) {
                if(num % 10 == d) {
                    ans.push_back(i);
                    break;
                }
                num = num / 10;
            }

            i++;
        }
        if(ans.size() == 0){
            return {-1};
        }
        return ans;
    }