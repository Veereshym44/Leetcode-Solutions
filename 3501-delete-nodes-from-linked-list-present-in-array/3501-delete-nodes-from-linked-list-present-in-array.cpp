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
        unordered_set<int>s(nums.begin(),nums.end());

        ListNode* temp=head;
        ListNode* prev=NULL;

        while(temp!=NULL)
        {
            if(s.find(temp->val)!=s.end())
            {
                if(prev==NULL)
                {
                    head=head->next;
                    temp->next=NULL;
                    temp=head;
                }

                else{
                    prev->next=temp->next;
                    ListNode* curr=temp;
                    temp=temp->next;
                    curr->next=NULL;
                }
            }

            else{
                prev=temp;
                temp=temp->next;
            }
        }

        return head;
    }
};