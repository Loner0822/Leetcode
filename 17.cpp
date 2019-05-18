/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:21
 * Filename	 : 17.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector <string> rec = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        int n = digits.size();
        vector<string> res, tmp;
        for (int i = 0; i < n; ++ i) {
            tmp = res, res.clear();
            int num = digits[i] - '0';
            int m = rec[num].size();
            int len = tmp.size();
            if (len == 0) {
                for (int j = 0; j < m; ++ j) {
                    string s(1, rec[num][j]);
                    res.push_back(s);
                }
            }
            else {
                for (int j = 0; j < len; ++ j)
                    for (int k = 0; k < m; ++ k)
                        res.push_back(tmp[j] + rec[num][k]);
            }
        }
        return res;
    }
};
