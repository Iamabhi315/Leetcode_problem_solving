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
        ListNode* p=new ListNode();
        ListNode* q=new ListNode();
        ListNode* r=new ListNode();
        p=head;
        q=head;
        r=nullptr;
        while(n){
            p=p->next;
            n--;
        }

        if(p == nullptr){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;

        }

        while(p){
            r=q;
            p=p->next;
            q=q->next;
        }
        r->next=q->next;
        delete q;
        return head;

    }
};