/*******************************************************************************
 * Author	 : Loner0822
 * Email	 : 392549438@qq.com
 * Last modified : 2019-05-16 15:12
 * Filename	 : 4.cpp
 * Description	 : 
 * *****************************************************************************/

class Solution {
public:
    
    int get_kth(vector<int>& nums1, int s1, int len1, vector<int>& nums2, int s2, int len2, int k) {
        if (len1 > len2)
            return get_kth(nums2, s2, len2, nums1, s1, len1, k);
        if (len1 == 0)
            return nums2[s2 + k - 1];
        if (k == 1)
            return min(nums1[s1], nums2[s2]);
        int mid1 = min(k / 2, len1);
        int mid2 = k - mid1;
        if (nums1[s1 + mid1 - 1] < nums2[s2 + mid2 - 1])
            return get_kth(nums1, s1 + mid1, len1 - mid1, nums2, s2, len2, k - mid1);
        else if (nums1[s1 + mid1 - 1] > nums2[s2 + mid2 - 1])
            return get_kth(nums1, s1, len1, nums2, s2 + mid2, len2 - mid2, k - mid2);
        else
            return nums1[s1 + mid1 - 1];
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        return 0.5 * (get_kth(nums1, 0, m, nums2, 0, n, (m + n + 1) / 2) + get_kth(nums1, 0, m, nums2, 0, n, (m + n + 2) / 2));
    }
};
