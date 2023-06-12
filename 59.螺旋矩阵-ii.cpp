/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        // 使用vector定义一个二维数组
        vector<vector<int>> res(n, vector<int>(n, 0));
        int x=0, y=0, cnt=1, offset=1, loop=n/2;
        int i,j;
        while(loop--){
            i=x;
            j=y;
            for(j=y;j<n-offset;j++) res[x][j] = cnt++;
            for(i=x;i<n-offset;i++) res[i][j] = cnt++;
            for(;j>y;j--) res[i][j] = cnt++;
            for(;i>x;i--) res[i][j] = cnt++;
            x++;
            y++;
            offset++;
        }
            if (n%2) res[n/2][n/2]=cnt;
    return res;
    }
};
// @lc code=end

