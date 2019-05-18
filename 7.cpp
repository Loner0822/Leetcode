/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:14
 * Filename	 : 7.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while(x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8))
                return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};
