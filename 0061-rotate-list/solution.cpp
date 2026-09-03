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

    int dfs(ListNode* head)
    {
        if(head == nullptr) return 0;
        return 1 + dfs(head -> next);
    }
    ListNode* rotateRight(ListNode* head, int k)
    {
        if(head == nullptr || head->next == nullptr || k == 0) return head;

        int c = dfs(head);

        k=k%c;

        if(k==0)
            return head;

        ListNode* tail = head;


        while(tail->next != nullptr)
        {
            tail = tail->next;
        }


        tail->next = head;


        int steps = c-k;

        while(steps > 0)
        {
            tail = tail->next;
            steps--;
        }
        ListNode* h = tail->next;

        tail->next = nullptr;

        return h;
    }
};
