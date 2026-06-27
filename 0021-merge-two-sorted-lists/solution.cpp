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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        int c1=0, c2=0;
        ListNode* l1 = list1;
        ListNode* l2 = list2;

        while(list1 != nullptr)
        {
            c1++;
            list1 = list1->next;
        }    
        while(list2 != nullptr)
        {
            c2++;
            list2 = list2-> next;
        }
        list1 = l1;
        list2 = l2;
        l1 = nullptr;
        l2= nullptr;
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        for(int i=0; i<c1+c2; i++)
        {
            int v =0;
            if(list1 == nullptr)
            {
                v= list2->val;
                list2 = list2-> next;
            }
            else if(list2 == nullptr)
            {
                v = list1->val;
                list1 = list1-> next;
            }
            else if(list1->val <= list2->val){
            v = list1->val;
            list1 = list1->next;
            }
            else if(list1->val > list2->val){
            v = list2-> val;
            list2 = list2->next;
            }
            ListNode* newNode = new ListNode(v);


            if (head == nullptr) {  
                head = newNode;  
                tail = newNode;  
            }
            else {  
                tail->next = newNode;  
                tail = newNode;  
            }  
        }
        return head;
    }
};
