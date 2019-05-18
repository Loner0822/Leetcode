/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:13
 * Filename	 : 5.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    string longestPalindrome(string s) {
        string t = "$#";
        int len = s.size();
        int p[2000 + 10];
        memset(p, 0, sizeof p);
        for (int i = 0; i < len; ++ i)
            t += s[i], t += "#";
        len = t.size();
        int mx = 0, id = 0;
        for (int i = 1; i < len; ++ i) {
            if (mx > i)
                p[i] = min(p[2 * id - i], mx - i);
            else
                p[i] = 1;
            while (t[i + p[i]] == t[i - p[i]])
                ++ p[i];
            if (i + p[i] > mx)
                mx = i + p[i], id = i;
        }
        int ans = 0, k;
        for (int i = 1; i < len; ++ i)
            if (p[i] > ans)
                ans = p[i], k = i;
        string res = "";
        for (int i = k - p[k] + 1; i <= k + p[k] - 1; ++ i)
            if (t[i] != '#' && t[i] != '$')
                res += t[i];
        return res;
    }
};
