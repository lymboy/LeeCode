//
// Created by sairo on 19-3-21.
//
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode* head = new ListNode(0);
        ListNode* current = head;
        int carry = 0;
        while (l1 != NULL || l2 != NULL) {
            int a = (l1 != NULL) ? 0 : l1->val;
            int b = (l2 != NULL) ? 0 : l2->val;
            carry += a + b;
            current->next = new ListNode(carry%10);
            current = current->next;
            carry /= 10;
            if (l1 != NULL)
                l1 = l1->next;
            if (l2 != NULL)
                l2 = l2->next;
        }


        return head->next;
    }
};


int main(void) {
    Solution solution;
    ListNode* l1;


    return 0;
}
