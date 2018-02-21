/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2018-02-21 11:51
 * Filename	 : 3.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size(), res = 0;
        int head = 0, tail = 0;
        int cnt[300];
        memset(cnt, 0, sizeof cnt);
        while (tail < len) {
            ++ cnt[s[tail]];
            while (cnt[s[tail]] > 1) {
                -- cnt[s[head]];
                ++ head;
            }
            res = max(res, tail - head + 1);
            ++ tail;
        }
        return res;
    }
};
