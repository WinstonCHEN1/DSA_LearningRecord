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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0,head);
        stack<ListNode*> stk;
        ListNode* cur = dummy;
        while(cur){
            stk.push(cur);
            cur = cur->next;
        }
        for(;n>0;n--){
            stk.pop();
        }
        ListNode* skip = stk.top();
        skip->next = skip->next->next;
        return dummy->next;
    }
};