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
#include<bits/stdc++.h>
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head) return nullptr; 
        stack<ListNode*> stk;
        ListNode* cur = head;
        while(cur){
            stk.push(cur);
            cur=cur->next;
        }
        ListNode* ans = stk.top();
        stk.pop();
        ListNode* tail = ans;
        while(!stk.empty()){
            tail->next=stk.top();
            stk.pop();
            tail=tail->next;
        }
        tail->next = nullptr; 
        return ans;
    }
};