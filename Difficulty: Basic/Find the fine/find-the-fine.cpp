class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        long long int tot = 0;
        for (int i = 0; i < fine.size(); i++) {
            if ((date % 2 == 0 && car[i] % 2 != 0) || 
                (date % 2 != 0 && car[i] % 2 == 0)) {
                tot += fine[i];
            }
        }
        return tot;
    }
};
