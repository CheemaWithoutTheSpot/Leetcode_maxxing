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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, bool> h;
        int size = nums.size();
        for(int i=0; i<size; i++)
        {
            h[nums[i]] = 1;
        }     
        ListNode* curr = head;
        ListNode* dumb = new ListNode(0, head);
        ListNode* prev= dumb; 
        while(curr != nullptr)
        {
            if(h[curr->val])
            {
                prev->next = curr->next;
                
                curr = prev->next;
            }
            else{
            prev = curr;
            curr = curr->next;
            }
        }

        return dumb->next;



    }
};
