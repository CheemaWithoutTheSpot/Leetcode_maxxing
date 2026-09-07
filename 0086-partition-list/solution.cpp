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
    void dfs(ListNode*head, vector<ListNode*>& less, vector<ListNode*>& more, int&x)
    {
        if(head == nullptr) return;
        if(head->val < x)
        {
            less.push_back(head);
        }
        else
        {
            more.push_back(head);
        }
        dfs(head->next, less, more, x);
    }
    ListNode* partition(ListNode* head, int x) {
        vector<ListNode*> less;
        vector<ListNode*> more;
        if (head == nullptr) return head;

        dfs(head, less, more, x);

        int sizel = less.size();
        int sizem = more.size();


        for (int i = 0; i < sizel - 1; i++) less[i]->next = less[i + 1];


        for (int i = 0; i < sizem - 1; i++) more[i]->next = more[i + 1];


        if (sizel == 0) {

            more[sizem - 1]->next = nullptr;
            return more[0];
        }

        if (sizem == 0) {

            less[sizel - 1]->next = nullptr;
            return less[0];
        }

        less[sizel - 1]->next = more[0];
        more[sizem - 1]->next = nullptr;
        return less[0];
    }
};
