/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:16
 * Filename	 : 10.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size(), n = p.size();
        if (n == 0)
            return m == 0;
        bool **F;
        F = new bool *[m + 1];
        for (int i = 0; i <= m; ++ i)
            F[i] = new bool [n + 1];
        F[0][0] = 1;
        for (int i = 1; i <= m; ++ i)
            F[i][0] = 0;
        for (int j = 1; j <= n; ++ j)
            F[0][j] = j > 1 && p[j - 1] == '*' && F[0][j - 2];
        for (int i = 1; i <= m; ++ i)
            for (int j = 1; j <= n; ++ j) {
                F[i][j] = 0;
                if (p[j - 1] != '*') {
                    if (F[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.')) 
                        F[i][j] = 1;
                }
                else {
                    if (F[i][j - 2])
                        F[i][j] = 1;
                    if (F[i - 1][j] && (s[i - 1] == p[j - 2] || p[j - 2] == '.'))
                        F[i][j] = 1;
                }
            }
        bool ans = F[m][n];
        delete [] F;
        return ans;
    }
};
