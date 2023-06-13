/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> res_set;
        unordered_set<int> num_set(nums1.begin(),nums1.end());
        for(int i=0; i<nums2.size(); i++)
        {
            if(num_set.find(nums2[i]) != num_set.end())
            {
                res_set.insert(nums2[i]);
            }
        }
        return vector<int>(res_set.begin(), res_set.end());
    }
};
// @lc code=end

