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
    ListNode* middleNode(ListNode* head) {
        stack<ListNode*> stk;
        ListNode* cur = head;
        int n = 0;

        while (cur) {
            stk.push(cur);
            cur = cur->next;
            n++;
        }

        int mid = (n % 2 == 0) ? (n / 2)-1 : n / 2;

        for (int i = 0; i < mid; i++) {
            stk.pop();
        }

        return stk.top();
    }
};
