/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j = nums.size()-1;
        int k = j;
        vector<int> result(k+1);
        while(i <= j){
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                result[k--] = nums[i]*nums[i];
                i++;
            }
            else {
                result[k--] = nums[j]*nums[j];
                j--;
            }
        }
        return result;
    }
};
// @lc code=end

