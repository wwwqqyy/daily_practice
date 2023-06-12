/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast)
            {
                ListNode *idx1 = fast;
                ListNode *idx2 = head;
                while(idx1 != idx2)
                {
                    idx1 = idx1->next;
                    idx2 = idx2->next;
                }
                return idx1;
            }
        }
        return NULL;
    }
};

// @lc code=end

