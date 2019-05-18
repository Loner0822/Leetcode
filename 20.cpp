/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:23
 * Filename	 : 20.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    bool isValid(string s) {
        vector<char> stk;
        for (int i = 0; i < (int)s.size(); ++ i)
        {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[')
                stk.push_back(s[i]);
            else
            {
                if (stk.empty())
                    return false;
                char ch = stk.back();
                if (s[i] == '}' && ch == '{')
                {
                    stk.pop_back();
                    continue;
                }
                if (s[i] == ']' && ch == '[')
                {
                    stk.pop_back();
                    continue;
                }
                if (s[i] == ')' && ch == '(')
                {
                    stk.pop_back();
                    continue;
                }
                return false;
            }
        }
        return stk.empty();
    }
};
