/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,bool> visited;
        ListNode* curr=new ListNode;
        curr=head;
        while(curr){
            if (visited.find(curr) == visited.end()) {
            visited[curr] = true;
            }
            else
                return true;
            curr=curr->next;
        }
        return false;
        
    }
};