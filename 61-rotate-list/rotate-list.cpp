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
    ListNode* rotateRight(ListNode* head, int k) {

        if (!head || !head->next || k == 0)
            return head;

        // Step 1: Calculate length
        int length = 0;
        ListNode* temp = head;
        while (temp) {
            length++;
            temp = temp->next;
        }

        // Step 2: Reduce k
        k = k % length;
        if (k == 0) return head;

        // Step 3: Move p k steps ahead
        ListNode* p = head;
        ListNode* q = head;

        for (int i = 0; i < k; i++) {
            p = p->next;
        }

        // Step 4: Move both until p reaches last
        while (p->next) {
            p = p->next;
            q = q->next;
        }

        // Step 5: Rotate
        p->next = head;
        head = q->next;
        q->next = nullptr;

        return head;
    }
};
