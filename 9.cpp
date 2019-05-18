/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:16
 * Filename	 : 9.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return 0;
        int res = 0, tmp = x;
        while (tmp) {
            res = res * 10 + tmp % 10;
            tmp /= 10;
        }
        if (res == x)
            return 1;
        else
            return 0;
    }
};
