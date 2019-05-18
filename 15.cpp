/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:20
 * Filename	 : 15.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int len = nums.size();
        for (int i = 0; i < len; ++ i) {
            int head = i + 1, tail = len - 1;
            int target = - nums[i];
            while (head < tail) {
                int sum = nums[head] + nums[tail];
                if (sum > target)
                    -- tail;
                else if (sum < target)
                    ++ head;
                else {
                    vector<int> tmp(3, 0);
                    tmp[0] = nums[i];
                    tmp[1] = nums[head];
                    tmp[2] = nums[tail];
                    ans.push_back(tmp);
                    while (head < tail && nums[head] == tmp[1])
                        ++ head;
                    while (head < tail && nums[tail] == tmp[2])
                        -- tail;
                }
            }
            while (i + 1 < len && nums[i + 1] == nums[i])
                ++ i;
        }
        return ans;
    }
};
