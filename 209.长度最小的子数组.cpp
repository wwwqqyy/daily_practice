/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数�?
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0, j ,sum = 0, subl, result = nums.size();
        int flag = 0;
        for(j=0;j<nums.size();j++){
            sum += nums[j];
            while(sum >= target){
                subl = j-i+1;
                result = min(subl,result);
                sum -= nums[i];
                i++;
                flag = 1;
            }
        }
        if(flag) return result;
        else return 0;
    }
};
// @lc code=end

