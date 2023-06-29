#include "bits/stdc++.h"

class Solution
{
    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *cur = head;
        ListNode *temp = NULL;
        while (cur != NULL)
        {
            temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }
};