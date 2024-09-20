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
    bool isPalindrome(ListNode* head) {
        stack<ListNode*> stk;
        ListNode* cur = head;
        while (cur) {
            stk.push(cur);
            cur = cur->next;
        }
        while (!stk.empty()) {
            ListNode* last = stk.top();
            stk.pop();
            if (last->val != head->val) {
                return false;
            }
            head = head->next;
        }
        return true;
    }
};
