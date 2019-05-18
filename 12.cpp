/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:18
 * Filename	 : 12.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    string intToRoman(int num) {
        const int number[13] = {1000, 900, 500, 400, 100,90, 50, 40, 10, 9, 5, 4, 1};  
        const string Roman[13] = {"M","CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};  
        string ans;
        for (int i = 0; i < 13; ++ i) {
            if (num < number[i])
                continue;
            while (num >= number[i]) {
                num -= number[i];
                ans += Roman[i];
            }
        }
        return ans;
    }
};
