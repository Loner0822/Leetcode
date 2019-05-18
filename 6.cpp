/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:14
 * Filename	 : 6.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        string ans = "";
        int len = s.size();
        int delta[2] = {0, 0};
        for (int i = 0; i < numRows; ++ i) {
            int cnt = i;
            if (delta[0] == 0)
                delta[0] = delta[1] = (numRows - 1) * 2;
            int flag = 0;
            while (cnt < s.size()) {
                ans += s[cnt], cnt += delta[flag];
                flag = 1 - flag;
            }                
            delta[0] -= 2;
            delta[1] = (numRows - 1) * 2 - delta[0];
        }
        return ans;
    }
};
