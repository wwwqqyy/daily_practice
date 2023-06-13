/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[26] = {0};
        int i;
        for(i=0; i<s.size(); i++)
        {
            hash[s[i]-'a']++;
        }
        for(i=0; i<t.size(); i++)
        {
            hash[t[i]-'a']--;
        }
        for(i=0; i<26; i++)
        {
            if(hash[i] == 0) continue;
            else return false;
        }
        return true;
    }
};
// @lc code=end

