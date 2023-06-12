/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */

// @lc code=start
class MyLinkedList {

public:
    // 定义链表节点结构体
    struct LinkedNode {
        int val;
        LinkedNode* next;
        LinkedNode(int val):val(val), next(nullptr){}
    };

    MyLinkedList() {
        dummy_head = new LinkedNode(0);
        size = 0;
    }
    
    int get(int index) {
        if(index > (size-1) || index < 0)
        {
            return -1;
        }
        LinkedNode* cur = dummy_head->next;
        while(index--)
        {
            cur = cur->next;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        LinkedNode* new_node = new LinkedNode(val);
        new_node->next = dummy_head->next;
        dummy_head->next = new_node;
        size++;
    }
    
    void addAtTail(int val) {
        LinkedNode* new_node = new LinkedNode(val);
        LinkedNode* cur = dummy_head;
        while(cur->next != nullptr)
        {
            cur = cur->next;
        }
        cur->next = new_node;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        // 最开始就要边界判断
        if(index > size) return;
        if(index < 0) index = 0; 
        LinkedNode* new_node = new LinkedNode(val);
        LinkedNode* cur = dummy_head;
        while(index--)
        {
            cur = cur->next;
        }
        new_node->next = cur->next;
        cur->next = new_node;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index >= size || index < 0) {
            return;
        }
        LinkedNode* cur = dummy_head;
        while(index--)
        {
            cur = cur->next;
        }
        LinkedNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        tmp = nullptr;
        size--;
    }

private:
    int size;
    LinkedNode* dummy_head;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

