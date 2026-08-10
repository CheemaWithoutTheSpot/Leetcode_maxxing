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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return head;
        ListNode* f = head->next;
        ListNode* prev =head;

        while(f != nullptr)
        {
            if(f->val == prev->val)
                prev->next = f->next;
            else
                prev = prev -> next;
            f = f-> next;
        }
        return head;
        
    }
};
