/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2018-02-21 11:44
 * Filename	 : 1.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for (int i = 0; i < nums.size(); ++ i) {
            for (int j = i + 1; j < nums.size(); ++ j)
                if (nums[i] + nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
        }
    }
};
