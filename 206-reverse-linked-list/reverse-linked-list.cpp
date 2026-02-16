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
    ListNode* reverseList(ListNode* head) {
        ListNode* p=new ListNode();
        ListNode* q=new ListNode();
            p=head;
            q=nullptr;
        while(head){
            head=head->next;
            p->next=q;
            q=p;
            p=head;
        }
        return q;
    }
};