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

    int leng(ListNode* head)
    {
        if(head == nullptr) return 0;

        return 1 + leng(head->next);
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr) return head;
        ListNode* prev =head;

        int size = leng(head);
        if (size == n) return head->next;
        int pos = 1;

        while(prev->next != nullptr)
        {
            pos++;
            if(pos == size - n +1)
                {prev->next = prev->next->next; break;}

            prev = prev-> next;
        }
        return head;
        
    }
};
