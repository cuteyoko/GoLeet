#include "leet.h"

// https://leetcode-cn.com/problems/add-two-numbers/submissions/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

namespace N0002 {

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* first = l1;
        ListNode* second = l2;
        ListNode* ptr = nullptr;
        ListNode* tail = ptr;
        while (first || second) {
            int add1 = first ? first->val : 0;
            int add2 = second ? second->val : 0;
            int res = add1 + add2 + carry;
            carry = res / 10;
            res = res % 10;
            auto node = new ListNode(res, nullptr);
            node->val = res;
            if (tail == nullptr) {
                ptr = node;
                tail = node;
            } else {
                tail->next = node;
                tail = node;
            }
            if (first) {
                first = first->next;
            }
            if (second) {
                second = second->next;
            }
        }
        if (carry) {
            auto node = new ListNode(1, nullptr);
            tail->next = node;
        }
        return ptr;
    }
};
}