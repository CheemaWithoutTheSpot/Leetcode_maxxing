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
    ListNode* wow (ListNode* head)
    {
        if(head->next == nullptr) return head;
        return wow(head->next);

    }
    void dfs(ListNode* head, ListNode* right)
    {
        if(right == nullptr) return;
        dfs(head->next, right -> next);
        right -> next = head;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr) return head;
        ListNode* res = wow(head);
        dfs(head, head->next);
        head->next = nullptr;
        return res;
    }
};
