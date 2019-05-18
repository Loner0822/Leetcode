/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:15
 * Filename	 : 8.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    int myAtoi(string str) {
        long long res = 0;
        int sign = 1;
        int len = str.size();
        int i = str.find_first_not_of(' ');
        if (i > len || i < 0)
            return 0;
        if (str[i] == '-' || str[i] == '+')
            sign = (str[i ++] == '-') ? -1 : 1;
        while ('0' <= str[i] && str[i] <='9') {
            res = res * 10 + str[i ++] - '0'; 
            if (res * sign > 2147483647ll)
                return 2147483647;
            if (res * sign < -2147483648ll)
                return -2147483648;
        }
        return (int)res * sign;
    }
};
