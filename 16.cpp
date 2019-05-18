/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:21
 * Filename	 : 16.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = 2047483647;
        int len = nums.size();
        for (int i = 0; i < len; ++ i) {
            int head = i + 1, tail = len - 1;
            int tar = - nums[i] + target;
            while (head < tail) {
                int sum = nums[head] + nums[tail];
                if (abs(res - target) > abs(sum - tar))
                    res = sum + nums[i];
                if (sum > tar)
                    -- tail;
                else if (sum < tar)
                    ++ head;
                else
                    return target;
                
            }
            while (i + 1 < len && nums[i + 1] == nums[i])
                ++ i;
        }
        return res;
    }
};
