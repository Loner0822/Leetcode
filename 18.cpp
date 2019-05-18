/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:22
 * Filename	 : 18.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    vector<vector<int> > fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int len = nums.size();
        for (int i = 0; i < len; ++ i) {
            for (int j = i + 1; j < len; ++ j) {
                int head = j + 1, tail = len - 1;
                int tar = target - nums[i] - nums[j];
                while (head < tail) {
                    int sum = nums[head] + nums[tail];
                    if (sum > tar)
                        -- tail;
                    else if (sum < tar)
                        ++ head;
                    else {
                        vector<int> tmp(4, 0);
                        tmp[0] = nums[i];
                        tmp[1] = nums[j];
                        tmp[2] = nums[head];
                        tmp[3] = nums[tail];
                        ans.push_back(tmp);
                        while (head < tail && nums[head] == tmp[2])
                            ++ head;
                        while (head < tail && nums[tail] == tmp[3])
                            -- tail;
                    }
                }
                while (j + 1 < len && nums[j + 1] == nums[j])
                    ++ j;
            }
            while (i + 1 < len && nums[i + 1] == nums[i])
                ++ i;
        }
        return ans;
    }
};
