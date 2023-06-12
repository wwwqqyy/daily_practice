/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy_head = new ListNode(0);
        dummy_head->next = head;
        ListNode* cur = dummy_head;
        ListNode* tmp = nullptr;
        ListNode* tmp1 = nullptr;
        while (cur->next != nullptr && cur->next->next !=nullptr)
        {
            tmp = cur->next;
            tmp1 = cur->next->next->next;
            cur->next = cur->next->next;
            cur->next->next = tmp;
            tmp->next = tmp1;
            cur = tmp;
        }
        return dummy_head->next;
    }
};
// @lc code=end

