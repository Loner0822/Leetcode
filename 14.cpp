/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:20
 * Filename	 : 14.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        string lcp;
        if (len == 0)
            return lcp;
        else
            lcp = strs[0];
        for (int i = 0; i < len; ++ i) {
            int cnt = 0;
            while (lcp[cnt] == strs[i][cnt])
                ++ cnt;
            lcp = lcp.substr(0, cnt);
        }
        return lcp;
    }
};
