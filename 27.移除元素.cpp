/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int fast = 0, slow = 0;
        for(fast = 0; fast < nums.size(); fast++){
            if(nums[fast] != val) nums[slow++] = nums[fast]; 
        }
        return slow;
    }
};
// @lc code=end

