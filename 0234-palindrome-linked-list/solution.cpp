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

    bool isPalindrome(ListNode* head) {
        stack<int> p;
        int size =0;
        ListNode* temp = head;
        while(temp != nullptr)
        {
            temp= temp->next;
            size++;
        }
        temp = head;
        for(int i=0; i<size/2; i++)
        {
            p.push(temp->val);
            temp = temp -> next;
        }
            if (size % 2 == 1) {
        temp = temp->next;   
       }

        for(int i=0; i<size/2; i++)
        {
            if(p.top() != temp->val) return 0;
            p.pop();
            temp = temp->next;
        }
        return 1;
        
    }
};
