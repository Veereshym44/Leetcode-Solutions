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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        stack<int>s;
        if(head==NULL || head->next==NULL)
        return head;
        ListNode* temp=head;
        bool flag=false;
        int i=0;
        while(temp!=NULL)
        {
            i++;
            if(i==left)
            {
                flag=true;
            }
            if(flag==true)
            {
                s.push(temp->val);
            }
            if(i==right)break;
            temp=temp->next;
        }
        i=1;
        temp=head;
        while(i<left)
        {
i++;
temp=temp->next;
        }
        while(!s.empty())
        {
            temp->val=s.top();
            s.pop();
            temp=temp->next;
        }
        return head;

    }
};