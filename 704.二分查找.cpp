/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1, middle = nums.size()/2;
        while (low<=high) //there is a equal.
        {
            /* code */
            if(nums[middle] < target){
                low = middle + 1;
                middle = (low + high) / 2;
            }
            else if(nums[middle] > target){
                high = middle - 1;
                middle = (low + high) / 2;
            }
            else return middle;
        }
        return -1;
    }
};
// @lc code=end

