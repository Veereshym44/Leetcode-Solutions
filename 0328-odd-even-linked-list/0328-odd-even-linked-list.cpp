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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL ||head->next==NULL||head->next->next==NULL)return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* oddPtr=odd;
        ListNode* evenPtr=even;

        while(odd!=NULL && even !=NULL)
        {
            if(odd->next!=NULL)
            {
                odd->next=odd->next->next;
                odd=odd->next;
            }
          
            if(even->next!=NULL)
            {
                even->next=even->next->next;
                even=even->next;
            }
           
        }

        odd=oddPtr;
        while(odd->next!=NULL)
        {
            odd=odd->next;
        }

        odd->next=evenPtr;
        return oddPtr;

    }
};