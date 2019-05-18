/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:19
 * Filename	 : 13.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    int romanToInt(string s) {
        int Roman[256];
        memset(Roman, 0, sizeof Roman);
        Roman['I'] = 1;
        Roman['V'] = 5;
        Roman['X'] = 10;
        Roman['L'] = 50;
        Roman['C'] = 100;
        Roman['D'] = 500;
        Roman['M'] = 1000;
        int len = s.size(), res = 0;
        for (int i = 0; i < len; ++ i) {
            if (i == len - 1 || Roman[s[i]] >= Roman[s[i + 1]])
                res += Roman[s[i]];
            else
                res -= Roman[s[i]];
        }
        return res;
    }
};
