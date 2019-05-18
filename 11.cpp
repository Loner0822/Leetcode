/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:17
 * Filename	 : 11.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea = 0;
        int L = 0, R = n - 1;
        while (L < R) {
            maxArea = max(maxArea, (R - L) * min(height[L], height[R]));
            if (height[L] < height[R])
                ++ L;
            else
                -- R;
        }
        return maxArea;
    }
};
