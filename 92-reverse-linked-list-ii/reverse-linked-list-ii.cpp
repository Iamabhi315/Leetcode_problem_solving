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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left == right) return head;

        ListNode* p = head;      // current pointer
        ListNode* q = nullptr;   // node before left
        ListNode* r = nullptr;   // reversed list head

        int pos = 1;

        // Move p to the left position
        while(pos < left) {
            q = p;
            p = p->next;
            pos++;
        }

        // Save the starting node of reversal
        ListNode* tail = p;

        // Reverse from left to right
        while(pos <= right) {
            ListNode* next = p->next;
            p->next = r;
            r = p;
            p = next;
            pos++;
        }

        // Connect reversed part back
        if(q != nullptr)
            q->next = r;
        else
            head = r;  // when left = 1

        tail->next = p;

        return head;
    }
};
