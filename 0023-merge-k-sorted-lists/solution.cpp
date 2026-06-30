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
 #include<execution>

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int i=0;
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        int size = lists.size();
        vector<int> num;
        num.reserve(size*500);
        for(int j=0; i<size ;j++)
        {
            if(lists[i] == nullptr)
            {
                i++;
                j=-1;
                continue;
            }
            num.push_back(lists[i]-> val);
            lists[i] = lists[i]->next;
            
        }
        sort(std::execution::par, num.begin(), num.end()); 

        for(int j=0; j<num.size(); j++)
        {
            ListNode* newNode = new ListNode(num[j]);


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
