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
    void dfs(int& res, int& two,  ListNode* head)
    {
        if(head == nullptr) return;
        dfs(res, two, head->next);
        res = res + head->val * two;
        two = two*2; 
    }
    int getDecimalValue(ListNode* head) {
        int res= 0; 
        int two = 1;
        dfs(res, two, head);
        return res;
    }
};
