/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
 */

// @lc code=start

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy_head = new ListNode();
        dummy_head->next = head;
        ListNode* cur = dummy_head;
        while(cur->next!=nullptr)
        {
            if(cur->next->val == val)
            {
                ListNode* tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            }
            else
            {
                cur = cur->next;
            }
        }
        head = dummy_head->next;
        delete dummy_head;
        return head;
    }
};
// @lc code=end

