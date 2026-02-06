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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) 
        return nullptr;
        ListNode* prev=new ListNode();
        ListNode* curr=new ListNode();
        prev = nullptr;
        curr = head;
        while(curr){
            if(curr==head && curr->val==val){
                curr=curr->next;
                head=curr;
            }
            else if(curr->val==val){
                prev->next=curr->next;
                curr=curr->next;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};