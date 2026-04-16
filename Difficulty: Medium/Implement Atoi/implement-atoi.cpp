class Solution {
  public:
    int myAtoi(string &s) {
        int sign = 1;
        int i = 0;
        long long num = 0;

        // skip spaces
        while(i < s.length() && s[i] == ' ') {
            i++;
        }

        // check sign
        if(i < s.length() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if(i < s.length() && s[i] == '+') {
            i++;
        }

        // read digits
        while(i < s.length() && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');

            // overflow check
            if(sign == 1 && num > 2147483647)
                return 2147483647;

            if(sign == -1 && -num < -2147483648)
                return -2147483648;

            i++;   // ✅ IMPORTANT (you missed this)
        }

        return num * sign;
    }
};